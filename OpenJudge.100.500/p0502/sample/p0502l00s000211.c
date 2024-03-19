#include<stdio.h>
int main(void)
{
	int i,n,a[1000],w,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	w=0; k=0;
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			k++;
		}
		if((a[i]%2==0&&a[i]%3==0)||(a[i]%2==0&&a[i]%5==0)){
			w++;
		}
	}
	if(k==w){
		printf("APPROVED\n");
	}
	else{
		printf("DENIED\n");
	}
	return 0;
}