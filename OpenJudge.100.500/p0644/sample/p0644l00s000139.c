#include<stdio.h>
int main(void){
	int a[3],sum=0;
	scanf("%1d%1d%1d",&a[0],&a[1],&a[2]);
	for(int i=0;i<3;i++){
		if(a[i]==1)sum++;
	}
	printf("%d",sum);
	return 0;
}