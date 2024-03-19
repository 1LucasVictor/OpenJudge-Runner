#include <stdio.h>
int main(void){
	int h,n,i,a[100000],sum=0;
	scanf("%d %d",&h,&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	
	if(sum>=h){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	return 0;
}