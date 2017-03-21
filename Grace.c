#include <stdio.h>
#define TEST 1
#define FT() int main(){ \
/*\
	Colleen sucks!\
*/\
char*a="#include <stdio.h>%c#define TEST 1%c#define FT() int main(){ %c%c/*%c%c%cColleen sucks!%c%c*/%c%cchar*a=%c%s%c;printf(a,10,10,92,10,92,10,9,92,10,92,10,34,a,34,10);}%cFT();";printf(a,10,10,92,10,92,10,9,92,10,92,10,34,a,34,10);}
FT();