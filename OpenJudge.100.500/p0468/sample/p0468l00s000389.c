#include<stdio.h>
#include<string.h>
int main()
{
	char *S;
  	scanf("%s",S);
  	char *A="ABC";
  	if(strcmp(S,A))
      printf("ABC");
  	else
      printf("ARC");
  return 0;
}