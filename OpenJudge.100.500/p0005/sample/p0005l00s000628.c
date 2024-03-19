#include<stdio.h>

int main(){
	int i=0;
	char a[20];
	while(1){
	scanf("%c",&a[i]);
	if(a[i]=='\n')break;
	i++;
	}
	i--;
	while(i>=0){
	printf("%c",a[i]);
	i--;
	}
	printf("\n");
	return 0;
}