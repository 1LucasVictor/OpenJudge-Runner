#include<stdio.h>
#include<string.h>

int main(void)
{
	char S[10], T[11];
  int len;
  	
  scanf("%s %s",S,T);
  len = strlen(S);
  T[len] = 0;
  
  if(strcmp(S,T) == 0)
  {
  	printf("Yes");
  }else{
  	printf("No");
  }  
	return 0;
}