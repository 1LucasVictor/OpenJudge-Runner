#include<stdio.h>
#include<string.h>
int main()
{
 char a[15],b[15];
 scanf("%s",a);
 scanf("%s",b);
 	b[strlen(b)-1]='\0';
 	if(strlen(b)==strlen(a)&&strcmp(a,b)==0)
 	printf("Yes");
 	else
 	printf("No");
 	
}