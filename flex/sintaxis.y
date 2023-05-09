%{
int yylex();
int yyerror(char*);
%}

%union{
    int num;
    char sym;
}

%token EOL
%token <num> NUMBER
%token PLUS
%token MINUS
%token MULTIPLY
%token DIVIDE

%type <num> exp

%%

input:
    | linea input;

linea: 
    exp EOL {printf("Number: %d\n", $1);} 
|   EOL;

exp: 
    NUMBER  {$$ = $1;}
|   exp PLUS exp {$$ = $1 + $3;}
|   exp MINUS exp {$$ = $1 - $3;}
|   exp MULTIPLY exp {$$ = $1 * $3;}
|   exp DIVIDE exp {$$ = $1 / $3;}
;


%%

int main(){
    yyparse();
    return 0;
}

yyerror(char* s){
    printf(stderr, "ERROR: %s\n", s);
    
    return 0;
}