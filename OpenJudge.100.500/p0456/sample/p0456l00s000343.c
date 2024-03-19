#include<stdio.h>
#include<string.h>
int main(void)
{
	char S[200001],T[200001];
	int i,len,cnt;
	scanf("%s %s",S,T);
	len=strlen(S);
	for(i=0;i<len;i++){
		if(S[i]!=T[i]){
			cnt=cnt+1;
		}
	}
	printf("%d\n",cnt);
	return 0;
}