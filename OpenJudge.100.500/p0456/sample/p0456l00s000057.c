#include<stdio.h>
 
int main(void){
	char S[200010],T[200010];
	int i=0,count=0;
	if(scanf("%s",S)){};
	if(scanf("%s",T)){};
 
	for(i=0;S[i] != '\0';i++){
		if(S[i] != T[i]){
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}