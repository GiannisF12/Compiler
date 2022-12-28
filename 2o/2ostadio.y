%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "extra/hashtbl.h" 

    extern FILE *yyin;
    extern int yylex();
    extern void yyerror(const char* err);
    
    

    HASHTBL *hashtbl;
    int scope = 0;
%}

%define parse.error verbose     //Gia analutika errors

%union{                          //Union gia tous tupous ton tokens
    int     akeraiosval;
    float   pragmatikosval; 
    char    *stringval;
}

%token <stringval>     T_EOF       0       "End Of File" 
%token <stringval>     T_PROGRAM           "Program"  
%token <stringval>     T_CONST             "Const"  
%token <stringval>     T_TYPE              "Type"  
%token <stringval>     T_ARRAY             "Array"  
%token <stringval>     T_LIST            "List"  
%token <stringval>     T_SET           "Set"  
%token <stringval>     T_OF                "Of"
%token <stringval>     T_RECORD           "Record"  
%token <stringval>     T_VAR               "Var"  
%token <stringval>     T_FUNCTION          "Function"  
%token <stringval>     T_PROCEDURE         "Procedure"  
%token <stringval>     T_INTEGER           "Integer"  
%token <stringval>     T_REAL              "Real"  
%token <stringval>     T_BOOLEAN           "Boolean"   
%token <stringval>     T_CHAR              "Char" 
%token <stringval>     T_FORWARD              "Forward" 
%token <stringval>     T_LENGTH          "Length"  
%token <stringval>     T_NEW            "New"  
%token <stringval>     T_BEGIN             "Begin"  
%token <stringval>     T_END               "End"  
%token <stringval>     T_IF                "If"  
%token <stringval>     T_THEN              "Then"   
%token <stringval>     T_ELSE              "Else"  
%token <stringval>     T_WHILE             "While"  
%token <stringval>     T_DO                "Do"  
%token <stringval>     T_CASE              "Case"  
%token <stringval>     T_OTHERWISE         "Otherwise"  
%token <stringval>     T_FOR               "For"  
%token <stringval>     T_TO                "To"  
%token <stringval>     T_DOWNTO            "Downto"
%token <stringval>     T_WITH            "With"  
%token <stringval>     T_READ              "Read"  
%token <stringval>     T_WRITE             "Write"  
%token <stringval>     T_ID                "Id"  
%token <akeraiosval>    T_ICONST            "Iconst"  
%token <pragmatikosval>      T_RCONST            "Rconst"  
%token <stringval>     T_BCONST            "Bconst"   
%token <stringval>     T_CCONST            "Cconst"


%token <stringval>     T_RELOP             "> | >= | < | <= | <>"  
%token <stringval>     T_ADDOP             "+ | -"  
%token <stringval>     T_OROP              "Or"  
%token <stringval>     T_MULDIVANDOP       "* | / | Mod | Div | And"  
%token <stringval>     T_NOTOP             "Not"  
%token <stringval>     T_INOP            "In"  
%token <stringval>     T_LISTFUNC            "Listfunction"  
%token <stringval>     T_STRING           "String"  
%token <stringval>     T_LPAREN            "("  
%token <stringval>     T_RPAREN            ")"  
%token <stringval>     T_SEMI              ";"  
%token <stringval>     T_DOT               "."  
%token <stringval>     T_COMMA             ","  
%token <stringval>     T_EQU               "="  
%token <stringval>     T_COLON             ":"  
%token <stringval>     T_LBRACK            "["  
%token <stringval>     T_RBRACK            "]"  
%token <stringval>     T_ASSIGN            ":="  
%token <stringval>     T_DOTDOT            ".."


///Proseteristikotita gia na lithoun oi sigrouseis

 %left T_ADDOP T_OROP
 %left T_MULDIVANDOP
 %nonassoc T_RELOP T_EQU
 %nonassoc T_NOTOP
 %nonassoc T_INOP
 %nonassoc T_RBRACK T_LBRACK T_RPAREN T_LPAREN

// Ksekremasto Else

%nonassoc jekremastoelse
 %nonassoc  T_ELSE

%start program
%%


program: header declarations subprograms comp_statement T_DOT  {hashtbl_get(hashtbl, scope);scope--;}
header: T_PROGRAM T_ID T_SEMI   {hashtbl_insert(hashtbl, $2, NULL, scope);}
declarations: constdefs typedefs vardefs
constdefs: T_CONST constant_defs T_SEMI
| %empty    { }
constant_defs: constant_defs T_SEMI T_ID T_EQU expression {hashtbl_insert(hashtbl, $3, NULL, scope);}
| T_ID T_EQU expression     {hashtbl_insert(hashtbl, $1, NULL, scope);}
| T_ID error                                            { ("Wrong use in constant definition"); yyerrok;} ;
expression: expression T_RELOP expression
| expression T_EQU expression
| expression T_INOP expression
| expression T_OROP expression
| expression T_ADDOP expression
| expression T_MULDIVANDOP expression
| T_ADDOP expression
| T_NOTOP expression
| variable
| T_ID T_LPAREN expressions T_RPAREN {hashtbl_insert(hashtbl, $1, NULL, scope);}
| T_LENGTH T_LPAREN expression T_RPAREN
| T_NEW T_LPAREN expression T_RPAREN
| constant
| T_LPAREN expression T_RPAREN
| setlistexpression
variable: T_ID {hashtbl_insert(hashtbl, $1, NULL, scope);}
| variable T_DOT T_ID {hashtbl_insert(hashtbl, $2, NULL, scope);}
| variable T_LBRACK expressions T_RBRACK
| T_LISTFUNC T_LPAREN expression T_RPAREN
expressions: expressions T_COMMA expression
| expression
constant: T_ICONST
| T_RCONST
| T_BCONST
| T_CCONST
setlistexpression: T_LBRACK expressions T_RBRACK
| T_LBRACK T_RBRACK
typedefs: T_TYPE type_defs T_SEMI
| %empty    { }
type_defs: type_defs T_SEMI T_ID T_EQU type_def {hashtbl_insert(hashtbl, $3, NULL, scope);}
| T_ID T_EQU type_def {hashtbl_insert(hashtbl, $1, NULL, scope);}
type_def: T_ARRAY T_LBRACK dims T_RBRACK T_OF typename
| T_LIST T_OF typename
| T_SET T_OF typename
| T_RECORD fields T_END
| limit T_DOTDOT limit
dims: dims T_COMMA limits
| limits
limits: limit T_DOTDOT limit
| T_ID {hashtbl_insert(hashtbl, $1, NULL, scope);} 
limit: sign T_ICONST
| T_CCONST
| T_BCONST
| T_ADDOP T_ID {hashtbl_insert(hashtbl, $2, NULL, scope);}
| T_ID {hashtbl_insert(hashtbl, $1, NULL, scope);}
sign: T_ADDOP | %empty    { }
typename: standard_type
| T_ID
standard_type: T_INTEGER | T_REAL | T_BOOLEAN | T_CHAR
fields: fields T_SEMI field
| field
field: identifiers T_COLON typename ;
identifiers: identifiers T_COMMA T_ID {hashtbl_insert(hashtbl, $3, NULL, scope);}
| T_ID  {hashtbl_insert(hashtbl, $1, NULL, scope);} 
| error                                                  {yyerror ("Wrong use in identifiers"); yyerrok;}
vardefs: T_VAR variable_defs T_SEMI
| %empty    { }
variable_defs: variable_defs T_SEMI identifiers T_COLON typename
| identifiers T_COLON typename
subprograms: subprograms {scope++;} subprogram T_SEMI
| %empty    { }
subprogram: sub_header T_SEMI T_FORWARD                     {hashtbl_get(hashtbl,scope); scope--;}
| sub_header T_SEMI declarations subprograms comp_statement {hashtbl_get(hashtbl,scope); scope--;}
| sub_header T_SEMI error                                {yyerror ("Wrong use in subprogram"); yyerrok;};
sub_header: T_FUNCTION T_ID formal_parameters T_COLON standard_type {hashtbl_insert(hashtbl, $2, NULL, scope);}
| T_FUNCTION T_ID formal_parameters T_COLON T_LIST {hashtbl_insert(hashtbl, $2, NULL, scope);}
| T_PROCEDURE T_ID formal_parameters {hashtbl_insert(hashtbl, $2, NULL, scope);}
| T_FUNCTION T_ID {hashtbl_insert(hashtbl, $2, NULL, scope);}
formal_parameters: T_LPAREN parameter_list T_RPAREN
| %empty    { }
parameter_list: parameter_list T_SEMI pass identifiers T_COLON typename
| pass identifiers T_COLON typename
pass: T_VAR | %empty    { }
comp_statement: T_BEGIN statements T_END
statements: statements T_SEMI statement
| statement
statement: assignment
| if_statement
| case_statement
| while_statement
| for_statement
| with_statement
| subprogram_call
| io_statement
| comp_statement
| %empty    { }
assignment: variable T_ASSIGN expression
| variable T_ASSIGN T_STRING
if_statement: T_IF expression T_THEN {scope++;} statement if_tail {hashtbl_get(hashtbl,scope); scope--;}
|T_IF expression error                                  {yyerror ("Wrong use in If statement"); yyerrok;} 
if_tail: T_ELSE {scope++;} statement                               {hashtbl_get(hashtbl,scope); scope--;}
| %empty  %prec jekremastoelse {}    ; 
case_statement: T_CASE expression T_OF cases case_tail T_END
cases: cases T_SEMI single_case
| single_case
single_case: label_list T_COLON statement
| %empty    { }
label_list: label_list T_COMMA label
| label
label: sign constant
| sign T_ID {hashtbl_insert(hashtbl, $2, NULL, scope);}
case_tail: T_SEMI T_OTHERWISE T_COLON statement
| %empty    { }
while_statement: T_WHILE expression T_DO {scope++;} statement      {hashtbl_get(hashtbl,scope); scope--;}
for_statement: T_FOR T_ID T_ASSIGN iter_space T_DO {scope++;} statement {hashtbl_insert(hashtbl, $2, NULL, scope);}   {hashtbl_get(hashtbl,scope); scope--;}
| T_FOR error                                           {yyerror ("Wrong use in For statement"); yyerrok;}   
iter_space: expression T_TO expression
| expression T_DOWNTO expression
with_statement: T_WITH variable T_DO statement
subprogram_call: T_ID {hashtbl_insert(hashtbl, $1, NULL, scope);}
| T_ID T_LPAREN expressions T_RPAREN {hashtbl_insert(hashtbl, $1, NULL, scope);}
io_statement: T_READ T_LPAREN read_list T_RPAREN
| T_WRITE T_LPAREN write_list T_RPAREN
read_list: read_list T_COMMA read_item
| read_item
read_item: variable
write_list: write_list T_COMMA write_item
| write_item
write_item: expression
| T_STRING
%%






//Main apo lektiko
int main(int argc, char *argv[]){
	int token;        

    
    if(!(hashtbl = hashtbl_create(10, NULL))){
        puts("Error, failed to initialize");
        return EXIT_FAILURE;
    }
	/* Διάβασε αρχείο */
	if(argc > 1){       
		yyin = fopen(argv[1], "r");
		if (yyin == NULL){
			perror ("[ERROR] Could not open file"); 
			return EXIT_FAILURE;
		}
	}        

	yyparse();

	fclose(yyin);
    hashtbl_destroy(hashtbl);
    return 0;
}