#include<stdio.h>
int main(){
	int i,n,data[100]={};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&data[i]);
	}
	for(i=n-1;i>=0;i--){
		if(i!=0)
			printf("%d ",data[i]);
		else
			printf("%d\n",data[i]);
	}
	return 0;
}