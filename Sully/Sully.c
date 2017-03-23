#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int ft_get_int(void) {
int i = 5;
return (i);
}
int main(){
FILE *file;
char str[10] = "Sully_";
char str2[8] = "Sully_";
char str3[100] = "clang -o ";
if (ft_get_int() > 0)
{
str[6] = (ft_get_int() - 1) + '0';
str2[6] = (ft_get_int() - 1) + '0';
str2[7] = '\0';
file = fopen(strcat(str, ".c\0"), "w");
}else {;}
if (ft_get_int() > 1)
{
system(strcat(strcat(strcat(str3, str2), "; ./"), str2));
}else {;}
char*a="#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%cvoid ft_get_int(void) {%cint i = %d;return (i);%c}%cint main(){%cFILE *file;%cchar str[10] = %cSully_%c;%cchar str2[8] = %cSully_%c;%cchar str3[100] = %cclang  -o %c;%cif (ft_get_int() > 0)else {;}%c{%cstr[6] = (ft_get_int() - 1) + %c0%c;%cstr2[6] = (ft_get_int() - 1) + %c0%c;%cstr2[7] = %c%c0%c;%cfile = fopen(strcat(str, %c.c%c0%c), %cw%c);%c}%cif(ft_get_int() > 1)else {;}%c{%csystem(strcat(strcat(strcat(str3, str2), %c; ./%c), str2));%c}%cchar*a=%c%s%c;fprintf(file,a,10,10,10,10,ft_get_int() - 1,10,10,10,10,34,34,10,34,34,10,34,34,10,10,10,39,39,10,39,39,10,39,92,39,10,34,92,34,34,34,10,10,10,10,34,34,10,10,34,a,34); fclose(file);}";fprintf(file,a,10,10,10,10,ft_get_int() - 1,10,10,10,10,34,34,10,34,34,10,34,34,10,10,10,39,39,10,39,39,10,39,92,39,10,34,92,34,34,34,10,10,10,10,34,34,10,10,34,a,34); fclose(file);}


// remettre les -wall extra error
// mettre system apres char *a