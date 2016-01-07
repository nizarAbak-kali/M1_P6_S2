%{

 }%

DIGIT [0-9]
VAR [a-z][a-z 0-9]*

%%
 {DIGIT}+ {printf("entier ");} 
 ";"|","  {printf("séparateur ");}
 {VAR}	{printf("variable %s ",yytext);}
 
 %%
 int main (){
	yylex()
 } ;
