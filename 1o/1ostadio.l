%{ 
	#include <stdio.h>
	#include <stdlib.h>
	#include <math.h>
	#include "id.h"

     char buffergiastring[254];                     
	 
	 void print_lexi(int token_id);
	 void yyerror(const char* err);

     void printakeraious(int token_id, int base);	
     int BinaryToInteger(char* str);
	 float BinaryToReal(char* str);		

	 void printpragmatikous(int token_id, int base);
	 int HexadecimalToInteger(char* str);	
	 float HexadecimalToReal(char* str);	

     int metritiserror=0; 

%}
/*mono ena arxeio gia input*/
/*peza=kefalaia*/
/*metritis gia grammes*/
%option noyywrap
%option case-insensitive			
%option yylineno                

/*upoanalites gia string kai comments*/
%x Stringsublexer
%x Commentsublexer 

/*Regex gia ta Id Icons Rconst kai Cconst*/
Identifiers         _?[a-zA-Z][a-zA-Z0-9_]*[a-zA-Z0-9]*

Akeraiosse16           (0X[1-9A-F][0-9A-F]*)
Akeraiosse2     		(0B1[01]*)
Akeraios           ([1-9][0-9]*|0) 

Pragmatikosse16           0X([A-F1-9][A-F0-9]*)*\.([A-F0-9]*[A-F1-9])
Pragmatikosse2			 ((0B[1][0-1]*)\.[01]+)|(0B\.[01]+)
Pragmatikos           ([1-9][0-9]*)*\.(0|[0-9]*[0-9])(E[+-]?([1-9]+|0))?|[1-9][0-9]*E[+-]?([1-9]+|0)|0.0

Cconsts		\'(([\x20-\x7E])|(\\[nftrbv]*))\'
listfunc    			((CAD*R)|(CD+R))

%%
 /*Desmedeumenes lexeis*/
"PROGRAM"                  					    { print_lexi(T_PROGRAM); return T_PROGRAM; }
"CONST"                  					    { print_lexi(T_CONST); return T_CONST; }
"TYPE"                  							    { print_lexi(T_TYPE); return T_TYPE; }
"ARRAY"                  						    { print_lexi(T_ARRAY); return T_ARRAY; }
"LIST"                  						    { print_lexi(T_LIST); return T_LIST; }
"SET"                  						    { print_lexi(T_SET); return T_SET; }
"OF"                  						    { print_lexi(T_OF); return T_OF; }
"VAR"                  					    { print_lexi(T_VAR); return T_VAR; }
"RECORD"                  					    { print_lexi(T_RECORD); return T_RECORD; }
"FUNCTION"                  						    { print_lexi(T_FUNCTION); return T_FUNCTION; }
"PROCEDURE"                  					    { print_lexi(T_PROCEDURE); return T_PROCEDURE; }
"INTEGER"                  						    { print_lexi(T_INTEGER); return T_INTEGER; }
"REAL"                  						    { print_lexi(T_REAL); return T_REAL; }
"BOOLEAN"                  						    { print_lexi(T_BOOLEAN); return T_BOOLEAN; }
"CHAR"                  						    { print_lexi(T_CHAR); return T_CHAR; }
"FORWARD"                  						    { print_lexi(T_FORWARD); return T_FORWARD; }
"LENGTH"                  						    { print_lexi(T_LENGTH); return T_LENGTH; }
"NEW"                  							    { print_lexi(T_NEW); return T_NEW; }
"BEGIN"                  						    { print_lexi(T_BEGIN); return T_BEGIN; }
"END"                  						    { print_lexi(T_END); return T_END; }
"IF"                  						    { print_lexi(T_IF); return T_IF; }
"THEN"                  							    { print_lexi(T_THEN); return T_THEN; }
"ELSE"                  						    { print_lexi(T_ELSE); return T_ELSE; }
"WHILE"                  						    { print_lexi(T_WHILE); return T_WHILE; }
"DO"                  						    { print_lexi(T_DO); return T_DO; }
"CASE"                  						    { print_lexi(T_CASE); return T_CASE; }
"OTHERWISE"                  						    { print_lexi(T_OTHERWISE); return T_OTHERWISE; }
"FOR"                  						    { print_lexi(T_FOR); return T_FOR; }
"TO"                  						    { print_lexi(T_TO); return T_TO; }
"DOWNTO"                  						    { print_lexi(T_DOWNTO); return T_DOWNTO; }
"WITH"                  					    { print_lexi(T_WITH); return T_WITH; }
"READ"                  						    { print_lexi(T_REAL); return T_READ; }
"WRITE"                  						    { print_lexi(T_WRITE); return T_WRITE; }

"TRUE"                  				{ print_lexi(T_BCONST); return T_BCONST; }
"FALSE"                               { print_lexi(T_BCONST); return T_BCONST; }

{listfunc}                                          { print_lexi(T_LISTFUNC); return T_LISTFUNC; } /*Prwta elegxo an einai list kai pio katw an einai Id  */

{Akeraiosse16}        								    { printakeraious(T_ICONST, 16); return T_ICONST;}
{Akeraiosse2}        								    { printakeraious(T_ICONST, 2); return T_ICONST;} 
{Akeraios}        								    { printakeraious(T_ICONST, 10); return T_ICONST;} 


{Pragmatikosse16}       								    { printpragmatikous(T_RCONST, 16); return T_RCONST; }
{Pragmatikosse2}       								    { printpragmatikous(T_RCONST, 2); return T_RCONST; }
{Pragmatikos}       							    	{ printpragmatikous(T_RCONST, 10); return T_RCONST; }

{Cconsts}        								      { print_lexi(T_CCONST); return T_CCONST; }


 /*Strings*/
\"				{strcpy(buffergiastring, ""); BEGIN(Stringsublexer); }   
<Stringsublexer>\"				{ BEGIN(INITIAL);
                                if(strcmp(buffergiastring,"") ==0 ){    
                                    yyerror("Found empty String"); 
                                   } else {
                                    printf("In line %d found string: '%s' (%d) \n", yylineno, buffergiastring, T_STRING); return T_STRING;}
                                }    
                                             
<Stringsublexer>\\(\n|\r\n)     { }                   
<Stringsublexer>(\\.|[^"\\]) 	{                       /* Eidikoi xaraktires */
                        if(strlen(yytext) == 2) {
								if(strcmp(yytext, "\\n") == 0) {
									strcat(buffergiastring, "\n");
								} else if (strcmp(yytext, "\\t") == 0 ) {
									strcat(buffergiastring, "\t");
								} else if (strcmp(yytext, "\\r") == 0) {
									strcat(buffergiastring, "\r");
								} else if (strcmp(yytext, "\\f") == 0) {
									strcat(buffergiastring, "\f");
								} else if (strcmp(yytext, "\\b") == 0) {
									strcat(buffergiastring, "\b");
								} else if (strcmp(yytext, "\\v") == 0) {
									strcat(buffergiastring, "\v");
								} else {
									strcat(buffergiastring, &yytext[1]);
								}
							}else {             /* Otidipote allo */
								strcat(buffergiastring, yytext); 
							}
                        }
<Stringsublexer>(\n|\r\n)		{ yyerror("New line without \\ \n"); }        /* Nea grammi xwris '\'   SFALMA */
<Stringsublexer><<EOF>>			{ yyerror("End of string without closing \n"); } /* Anoixto string (Xwris na kleinoun ta ") SFALMA */
<Stringsublexer>.				{ yyerror("Unrecognised Charachter \n"); }            /* Otidoipote allo SFALMA */



 /*Comments*/
"{"                       { printf("Found comment\n");BEGIN(Commentsublexer); }
<Commentsublexer>"}"    { BEGIN(INITIAL); }
<Commentsublexer>[\n]|[\r\n]					                        {} 				/* Nea grammi  */
<Commentsublexer>.            { }


">"                   { print_lexi(T_RELOP); return T_RELOP; }  
">="                   { print_lexi(T_RELOP); return T_RELOP; }  
"<"                   { print_lexi(T_RELOP); return T_RELOP; }  
"<="                   { print_lexi(T_RELOP); return T_RELOP; }  
"<>"                 { print_lexi(T_RELOP); return T_RELOP; }

"+"                             { print_lexi(T_ADDOP); return T_ADDOP; } 
"-"                                   { print_lexi(T_ADDOP); return T_ADDOP; }    
            
"OR"          							{ print_lexi(T_OROP); return T_OROP; }

"*"               { print_lexi(T_MULDIVANDOP); return T_MULDIVANDOP; } 
"/"               { print_lexi(T_MULDIVANDOP); return T_MULDIVANDOP; } 
"DIV"               { print_lexi(T_MULDIVANDOP); return T_MULDIVANDOP; } 
"MOD"               { print_lexi(T_MULDIVANDOP); return T_MULDIVANDOP; } 
"AND"               { print_lexi(T_MULDIVANDOP); return T_MULDIVANDOP; } 
           
"NOT"                                             { print_lexi(T_NOTOP); return T_NOTOP; }

"IN"                                 { print_lexi(T_INOP); return T_INOP; }

"("                                                     { print_lexi(T_LPAREN); return T_LPAREN; } 

")"                                                     { print_lexi(T_RPAREN); return T_RPAREN; } 

";"                                                     { print_lexi(T_SEMI); return T_SEMI; } 

"."                                                     { print_lexi(T_DOT); return T_DOT; } 

","                                                     { print_lexi(T_COMMA); return T_COMMA; } 

"="                                                     { print_lexi(T_EQU); return T_EQU; } 

":"                                                     { print_lexi(T_COLON); return T_COLON; } 

"["                                                     { print_lexi(T_LBRACK); return T_LBRACK; } 

"]"                                                     { print_lexi(T_RBRACK); return T_RBRACK; } 

":="                                                    { print_lexi(T_ASSIGN); return T_ASSIGN; }

".."                                                    { print_lexi(T_DOTDOT); return T_DOTDOT; } 


 /*Anagnorizw edw ta id giati to regex tous tairiazei sta OR DIV MOD AND NOT */
{Identifiers}   { print_lexi(T_ID); return T_ID; }

[ \t]					                            {}						
[\n]|[\r\n]					                        {} 				
<<EOF>>												{ print_lexi(T_EOF); return T_EOF; } 
.													{ yyerror("Unrecognised Charachter \n"); }


%%

int main(int argc, char *argv[]){
	int token;        
	if(argc > 1){       

		yyin = fopen(argv[1], "r");
		if (yyin == NULL){
			perror ("Error opening file"); 
			return -1;
		}
	 }        

	do{		
		token = yylex(); 
	}while(token != T_EOF);
	fclose(yyin);
	yyterminate();
}


void print_lexi(int token_id) {
    printf("In line %d found token \'%s\' with number:(%d) \n", yylineno, yytext, token_id);
}
 //Metatropi akeraiou  apo tis vaseis se dekadiko 
void printakeraious(int token_id, int base){		
        int number;
        if(base == 2) number = BinaryToInteger(yytext);
        else if(base == 16) number = HexadecimalToInteger(yytext);
        else number = atoi(yytext);
        printf("In line %d found number: %d (%s) from base [%d] with token number (%d) \n", yylineno, number, yytext, base, token_id);
    
}
 //Metatropi pragmatikou apo tis vaseis se dekadiko 
void printpragmatikous(int token_id, int base){
        float number;
        if(base == 2) number = BinaryToReal(yytext);
        else if(base == 16) number = HexadecimalToReal(yytext);
        else number = atof(yytext);
        printf("In line %d found float: %f (%s) from base [%d] with token number (%d) \n", yylineno, number, yytext, base, token_id);
    
}


//Hex to Int
int HexadecimalToInteger(char *str){
    return (int) strtol(&str[2], NULL, 16);
}

//Bin to Int
int BinaryToInteger(char *str){
    return (int) strtol(&str[2], NULL, 2);
}

//Hex to Float
float HexadecimalToReal(char*str){
    float number = 0.0;
    int i,length_real;  
    char *character;
    character = strchr(str,'.');
    length_real = strlen(character)-1;
    number = (int)strtol(&str[2],&character,16);
    for(i=1;i<=length_real;i++){
        if(character[i] <= '9')
			number += (character[i] - '0') * (1/pow(16,i));
		else
			number += (character[i] + 10 - 'A') * (1/pow(16,i)); 
	}
    return number;
}

//Bin to Float
float BinaryToReal(char* str){
    float number = 0.0;
    int i,length_real;
    char *character;
    character = strchr(str,'.');
    length_real = strlen(character)-1;
    number = (int)strtol(&str[2],&character,2);
    for(i=1;i<=length_real;i++){
        number += (character[i] - '0') * (1/pow(2,i));
    }
    return number;
}
//Sunartisi gia ta Erros me Max errors ta 5
void yyerror(const char* err){
    metritiserror++;
    printf("ERROR - Line %d --> %s\n", yylineno, err);

    if(metritiserror == 5) {
        printf("MAXIMUM ERRORS FOUND\n");
        exit(EXIT_FAILURE);
    }
    yyless(1); /* Methodos panikou */
}
