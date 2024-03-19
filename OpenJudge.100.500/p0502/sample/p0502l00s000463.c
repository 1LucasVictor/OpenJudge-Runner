#include<stdio.h>
int main(){
	int N,i,temp,key=1;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&temp);
		if(temp%2==0)
			if(temp%3!=0&&temp%5!=0)
				key=0;
	}
	if(key==1)
		printf("APPROVED");
	else
		printf("DENIED");
	return 0;
}