#include<stdio.h>
#include<string.h>
int main()
{
	char *S;
  	scanf("%s",S);
  	char *A="ABC";
  	if(strcmp(S,A)==0)
      printf("ARC");
  	else
      printf("ABC");
  return 0;
}