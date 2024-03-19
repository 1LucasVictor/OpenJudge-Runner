#include <stdio.h>
int main(void){
	int i,b=0;
	char a[5];
	scanf("%s",a);
	for(i=1;i<=3;i++){
	if(a[i]==a[i-1]) b = 1;
	}
	if(b==0) printf("Good\n");
	else printf("Bad\n");
	return 0;
}