#include <stdio.h>
#include <string.h>

int main(void)
{
	while(1){
		char moji[201];
		int n,i,j,kaisu[101];
		scanf("%s",moji);
		if(moji[0]=='-') break;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf(" %d",&kaisu[i]);
		}
		for(i=0;i<n;i++){
			strncat(moji,moji,kaisu[i]);
			j=0;
			while(moji[j]!='\0'){
				moji[j]=moji[j+kaisu[i]];
				j++;
			}
		}
		printf("%s\n",moji);
	}
	return 0;
}