#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE *file;
char path[12] = "./";
int ft_get_int(void) {
int i = 5;
return (i);
}
int main(){
char str[10] = "Sully_";
char str2[8] = "Sully_";
char str3[150] = "gcc -Wall -Werror -Wextra -o ";
if (ft_get_int() > 0)
{
str[6] = (ft_get_int() - 1) + '0';
str2[6] = (ft_get_int() - 1) + '0';
str2[7] = '\0';
file = fopen(strcat(str, ".c\0"), "w");
}else {;}
char*a="#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%cFILE *file;%cchar path[12] = %c./%c;%cint ft_get_int(void) {%cint i = %d;%creturn (i);%c}%cint main(){%cchar str[10] = %cSully_%c;%cchar str2[8] = %cSully_%c;%cchar str3[100] = %cgcc -o %c;%cif (ft_get_int() > 0)%c{%cstr[6] = (ft_get_int() - 1) + %c0%c;%cstr2[6] = (ft_get_int() - 1) + %c0%c;%cstr2[7] = %c%c0%c;%cfile = fopen(strcat(str, %c.c%c0%c), %cw%c);%c}else {;}%cchar*a=%c%s%c;fprintf(file,a,10,10,10,10,34,34,10,10,ft_get_int() - 1,10,10,10,10,34,34,10,34,34,10,34,34,10,10,10,39,39,10,39,39,10,39,92,39,10,34,92,34,34,34,10,10,34,a,34,10,34,34,10,10,10,10); fclose(file);%cif (ft_get_int() > 0) {system(strcat(strcat(strcat(str3, str2), %c %c), str));}%cif (ft_get_int() > 1)%c{%csystem(strcat(path, str2));%c}else {;}return (0);}";fprintf(file,a,10,10,10,10,34,34,10,10,ft_get_int() - 1,10,10,10,10,34,34,10,34,34,10,34,34,10,10,10,39,39,10,39,39,10,39,92,39,10,34,92,34,34,34,10,10,34,a,34,10,34,34,10,10,10,10); fclose(file);
if (ft_get_int() > 0) {system(strcat(strcat(strcat(str3, str2), " "), str));}
if (ft_get_int() > 1)
{
system(strcat(path, str2));
}else {;}return (0);}

// create new if cond with system to get Sully_0 exec
// create path char