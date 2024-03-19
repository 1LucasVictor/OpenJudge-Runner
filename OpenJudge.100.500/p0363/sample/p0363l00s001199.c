#include<stdio.h>
int main(){
	int a[4],i,j,h;
	for(i=1;i<=3;i++)scanf("%d",&a[i]);
	for(i=1;i<=3;i++){
		for(j=i+1;j<=3;j++){
			if(a[i]>a[j]){
				h=a[i];
				a[i]=a[j];
				a[j]=h;
			}
		}
	}
	printf("%d %d %d\n",a[1],a[2],a[3]);
	return 0;
}
