#include <stdio.h>
#define TEST 1
#define FT() int main(){ \
FILE *file = fopen("Grace_kid.c", "w"); \
/*\
	Colleen sucks!\
*/\
char*a="#include <stdio.h>%c#define TEST 1%c#define FT() int main(){ %c%cFILE *file = fopen(%cGrace_kid.c%c, %cw%c); %c%c/*%c%c%cColleen sucks!%c%c*/%c%cchar*a=%c%s%c;fprintf(file,a,10,10,92,10,34,34,34,34,92,10,92,10,9,92,10,92,10,34,a,34,10); fclose(file);}%cFT();";fprintf(file,a,10,10,92,10,34,34,34,34,92,10,92,10,9,92,10,92,10,34,a,34,10); fclose(file);}
FT();