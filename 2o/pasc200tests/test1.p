program try_it;
const g= 0B1011;
type gar= 1..g;
     ar= array[gar] of integer;
     re= record
           x1,x2:integer { no comment
at all! }
         end;
     ss= set of char;
     ilt= list of integer;
var x: ar; z,w: real; r: re; s: ss; t: enum; il: ilt;
procedure all(n:integer; var x: ilt);
   function _try_me(i,j:integer): real;
   const omega='W'; seira = -g*.314159E1;
   begin
   if (i+j > omega) then _try_me :=0.0
   else
      if (i > omega) then _try_me :=-1.0
      else _try_me := 1.0
   end;
begin
if (n <= 0) then
   x := new(0) {{ or x := new(-1)}
else
   begin
   all(_try_me(n-1,ar[n+1]),x);
   cdr(x) := new(-car(x))
   end
end;
begin
a := "jjk\
kk";
x[s] := c in [ 9+c[3], 0XA18, 100*x[i+j]];
il := [-1,9,0,3];
y[z] := not x and not all(10,-x[j]) or (z = k*3e-2);
all(-y[x[i]],il);
if b and (x > a[r.x1 mod k]) then k;
for x := 1 to x[10,g[y+x]] do
   read(x[i],i,x[i]);
t := prwtos;
if z = x then t := t+1;
if b then t := t+1;
y := not x[i] and (r.x2 = 0) or (t = tritos);
write("endofprogram")
end.
