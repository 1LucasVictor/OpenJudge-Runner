#include<stdio.h>
int main(void){

	int i,N,a[100],flag=0;

	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<N;i++){
		 
		if(a[i]%2==0){
			if(a[i]%3!=0 && a[i]%5!=0)flag=1;
		}
	}
	if(flag==0)printf("APPROVED");
	else printf("DENIED");

	return 0;
}