#include<stdio.h>
int main(){
	int h,n;
	int a[100005];
	int i=0;
	int sum=0;
	scanf("%d%d",&h,&n); 
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	if(sum>=h)printf("Yes");
	else printf("No");
}