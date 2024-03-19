#include <stdio.h>
int main(void){
	char a[4],i,n=0;
	scanf("%s",a);
	for(i=0;i<3;i++){
		if(a[i]=='1'){
			n++;
		}
	}
	printf("%d",n);
	return 0;
}