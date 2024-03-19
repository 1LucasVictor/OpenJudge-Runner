#include<stdio.h>
int main(void){
	int a[3],b[3],k,l;
	
	scanf("%d %d %d",&a[1],&a[2],&a[3]);
	
	b[1]=a[1];
	b[2]=a[1];
	b[3]=a[1];
	
	for(k=1;k<=3;k++){
		
		if(a[k]>b[1]){
			b[1]=a[k];
		}
		
		if(a[k]<b[3]){
			b[3]=a[k];
		}
		
	}
	
	for(l=1;l<=3;l++){
		if(a[l]!=b[1]&&a[l]!=b[3]){
			b[2]=a[l];
		}
		
	}
	
	printf("%d %d %d\n",b[3],b[2],b[1]);
	
	return 0;
}
