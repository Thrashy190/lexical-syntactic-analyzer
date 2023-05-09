%{
    #include "sintaxis.tab.h"
%}

%%
[0-9]+ {yylval.num = atoi(yytext); return NUMBER;}
"+" {return PLUS;}
"-" {return MINUS;}
"/" {return DIVIDE;}
"*" {return MULTIPLY;}
\n {return EOL;}
. {}
%%

yywrap(){}

