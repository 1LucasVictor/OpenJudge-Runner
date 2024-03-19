#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[100];
	for(i = 0;i < n;i++)
			{scanf("%d",&a[i]);
			}
	for(i = n - 1;i > -1;i--){
		if( i == n - 1 ){} else{printf(" ");}
		 printf("%d", a[i]);
	}
	printf("\n");
	return 0;
}

