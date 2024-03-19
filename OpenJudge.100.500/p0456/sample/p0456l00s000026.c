#include<stdio.h>
 
int main(void){
	char S[200000],T[200000];
	int i=0,count=0;
	(void)scanf("%s",S);
	(void)scanf("%s",T);
 
	for(i=0;S[i] != '\0';i++){
		if(S[i] != T[i]){
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}