#include <stdio.h>
#include<string.h>

int main(void)
{
char S[4];
scanf("%s",S);
if((S[0]==S[1])&&(S[1]==S[2])){
	printf("No\n");
}else{
	printf("Yes\n");
}
return 0;
}