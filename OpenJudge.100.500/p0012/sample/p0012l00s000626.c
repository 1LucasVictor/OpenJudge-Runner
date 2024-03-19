#include<stdio.h>

int main(){
	int i,n,count=0;
	int train[100];
	while(scanf("%d",&n)!=EOF){
		if(n!=0){
			train[count]=n;
			count++;
		}else{
			printf("%d\n",train[count-1]);
			count--;
		}
	}
	return 0;
}