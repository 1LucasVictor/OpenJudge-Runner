#include<stdio.h>
#include<string.h>
int main()
{
	char *S;
  	scanf("%s",S);
  	char *A="ABC\0";
  	if(strcmp(S,A)==0)
      printf("ARC");
  	else
      printf("ABC");
  return 0;
}