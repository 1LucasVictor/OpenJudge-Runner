#include <stdio.h>

int main(void) {
	int n,i,temp;
	scanf("%d",&n);
	int a[3*n];
	for (i=0;i<3*n;i++) scanf("%d",&a[i]);
	for(i=0;i<3*n;i+=3) {
		if (a[i]>a[i+1]){
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
		if (a[i+1]>a[i+2]){
			temp=a[i+1];
			a[i+1]=a[i+2];
			a[i+2]=temp;
		}
		if(a[i]*a[i]+a[i+1]*a[i+1]==a[i+2]*a[i+2]){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}