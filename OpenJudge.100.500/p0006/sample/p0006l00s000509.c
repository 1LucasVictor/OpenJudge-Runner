#include<stdio.h>

int main(){
	int i,n,syakkin;

	scanf("%d",&n);
	syakkin=100000;
	for(i=0;i<n;i++){
		syakkin=syakkin*1.05+999;
		
		syakkin=(syakkin/1000)*1000;

	}
	printf("%d\n",syakkin);

	return 0;
}