%{ /* Skaner dla kalkulatora ze zmiennymi. */
#include "parser.h"  /* kody token�w parsera */
#include <stdlib.h>
extern double vtable[26];
%}
%option noyywrap
%%
([0-9]+|[0-9]*\.[0-9]+)  { 
          yylval.val=atof(yytext); return NUMBER; }
[ \t]   { /* pomi� znaki odst�pu */ }
[a-z]   { yylval.var=yytext[0]-'a'; return NAME; }
.|\n    { return yytext[0]; }
%%
