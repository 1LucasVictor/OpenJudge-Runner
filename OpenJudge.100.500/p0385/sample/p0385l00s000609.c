#include <stdio.h>
int main (void)
{
	int sum[1000];
	int i;
	int j;
	int k=0;
	char array[1000];
	char n[10]={'0','1','2','3','4','5','6','7','8','9'};
		for(i=0;i<1000;i++){
	sum[i]=0;
	}
	while(1){
		for(i=0;i<1000;i++){
	array[i]='0';
	}
	scanf("%s",array);
		if(array[0]=='0'){
			break;
		}
	for(i=0;i<1000;i++){
		for(j=0;j<10;j++){
			if(n[j]==array[i]){
				sum[k]+=j;
			}
		}
	}
	k++;
	}
	
	for(i=0;i<=k;i++){
		if(sum[i]==0){
			break;
		}
	printf("%d\n",sum[i]);
	}
	return 0;
}	