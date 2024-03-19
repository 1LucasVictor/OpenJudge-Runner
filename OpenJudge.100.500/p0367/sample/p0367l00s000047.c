#include <stdio.h>

int main(){
	int a[3],c=0,i;
	for (i=0;i<3;++i){
		scanf("%d",a+i);
	}
	for (i=a[0];i<=a[1];++i){
		if (a[2]%i == 0){
			c++;
		}
	}
	printf("%d\n",c );

	return 0;
}