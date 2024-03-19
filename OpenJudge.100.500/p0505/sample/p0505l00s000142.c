#include <stdio.h>
int main(void){
	int h,n,i,sum=0;
	scanf("%d%d",&h,&n);
	int a[n+1];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf(sum<h?"No":"Yes");
	return 0;
}