#include<stdio.h>

int main(void){
	char S[300000],T[300000];
	int k,n=0;
		scanf("%s",S);
		scanf("%s",T);
	for (k = 0;S[k] != '\0';k++);
	for(int i=0;i<k;i++){
		if(S[i]!=T[i]){
			n+=1;
		}
	}
	printf("%d\n",n);
	
	return 0;
}