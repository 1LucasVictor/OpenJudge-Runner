#include<stdio.h>

int main(void)
{
	int i,n,x;
	int a[100];
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(x = n - 1;x >= 0;x--){
		if(x != n-1){
			printf(" ");
		}
	        printf("%d",a[x]);
        }
	printf("\n");
	return 0;
}