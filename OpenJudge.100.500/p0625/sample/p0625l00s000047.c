#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
int a,b;
char str[101];
fgets(str,sizeof(str),stdin);
a=atoi(strtok(str," "));
b=atoi(strtok(NULL," "));
if(a>=1&&a<=8)
{
if(b>=1&&b<=8)
printf("Yay!");
}
else
printf(":(");
}