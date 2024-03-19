#include<stdio.h>

int main(){

	int k=0,a=0,b=0,count=0,i;

	scanf("%d",&k);
	scanf("%d%d",&a,&b);

	for(i=a;i<=b;i++){
		if(i%k==0){
			printf("OK");
			count+=1;
			break;
		}
	}

	if(count==0)
		printf("NG");
	return 0;
}



	

