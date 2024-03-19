#include <stdio.h>
int main(void){
	char a[5];
	scanf("%s",a);
	if(a[0]==a[1]){
		if((a[2]==a[3])&&(a[1]!=a[2])){
			printf("Yes");
		}else{
			printf("No");
		}
	}else if(a[0]==a[2]){
		if((a[1]==a[3])&&(a[0]!=a[1])){
			printf("Yes");
		}else{
			printf("No");
		}
	}else if(a[0]==a[3]){
		if((a[1]==a[2])&&(a[0]!=a[1])){
			printf("Yes");
		}else{
			printf("No");
		}
	}else{
		printf("No");
	}
	return 0;
}