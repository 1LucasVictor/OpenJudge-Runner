#include<stdio.h>
int main(){
	int a[3];
	scanf("%d%d%d",&a[0],&a[1],&a[2]);
	int i,j;
	for(i=0;i<2;i++){
		for(j=i+1;j<3;j++){
			if(a[i]>a[j]){
				int t;
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	printf("%d %d %d\n",a[0],a[1],a[2]);
	return 0;
}

