#include<stdio.h>

int main(){

	int n,s,k=100000;
	
	scanf("%d",&n);
	for(s=1;s<=n;s++){
		k=k*1.05;
		if(k%1000>0)k=k/1000*1000+1000;
	}
	printf("%d\n",k);
        return 0;
} 