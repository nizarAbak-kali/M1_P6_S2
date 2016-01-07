%{

 }%

DIGIT [0-9]
OPERATEUR ['+' '-' '*' '/']{1}

%% 
 {DIGIT}+ {Digit} 
 {OPERATEUR} {Opertateur}
 
 %%
 int main (){
	yylex()
 } ;
