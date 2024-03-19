#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d ",&a);
	scanf("%d ",&b);
	scanf("%d ",&c);
	if(a==5&&b==5){
		if(c==7){
		printf("YES");
		}else {
		printf("NO");
		}
	}else if(a==5&&b==7||b==5&&a==7){
		if(c==5){
		printf("YES");
		}else{
		printf("NO");
		}
	}
}