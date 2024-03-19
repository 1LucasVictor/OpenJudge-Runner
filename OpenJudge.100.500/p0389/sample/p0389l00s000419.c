#include <stdio.h>
#include <string.h>
char moji[200];
int kaisu[100];

int main(void)
{
	while(1){
		int n,i,j=0;
		scanf("%s",moji);
		if(moji[0]=='-') break;
		scanf(" %d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&kaisu[i]);
		}
		for(i=0;i<n;i++){
			strncat(moji,moji,kaisu[i]);
			fun(i);
		}
		printf("%s\n",moji);
	}
	return 0;
}

int fun(int i){
	int j=0;
	while(moji[j]!='\0'){
		moji[j]=moji[j+kaisu[i]];
		j++;
	}
	
	return 0;
}