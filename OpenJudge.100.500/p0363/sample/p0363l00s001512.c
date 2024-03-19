#include<stdio.h>
int main(){
	int a[10000],i,j,x;
	
	for(i=0;i<3;i++){
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<2;i++){
		for(j=i+1;j<3;j++){
			if(a[i]>a[j]){
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
	
	for(i=0;i<3;i++){
	printf("%d",a[i]);
		if(i<2){
			printf(" ");
		}
	}
	printf("\n");
	
	
	
	return 0;
}

