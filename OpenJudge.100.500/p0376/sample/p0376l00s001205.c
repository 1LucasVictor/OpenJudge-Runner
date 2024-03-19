#include <stdio.h>
int main(){
	int a,b[1000],i=0,*str;

	scanf("%d",&a);
	while(i != a){
		scanf("%d",&b[i]);
		i++;
	}
	str = &b[i-1];
	while(str != &b[0]){
		printf("%d ",*str);
		str--;
	}
	printf("%d",b[0]);
	printf("\n");
	return 0;
}