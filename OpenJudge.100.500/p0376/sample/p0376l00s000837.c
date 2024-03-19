#include <stdio.h>
int main(void){
	int n,i;
	scanf("%d",&n);
	int a[100],tmp;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n/2);i++){
		tmp=a[i];
		a[i]=a[(n-1)-i];
	   	a[(n-1)-i]=tmp;
	}
	for(int i=0;i<n;i++){
		if(i>=1) printf(" ");
        		printf("%d",a[i]);
	}
	putchar('\n');
	return 0;
}

