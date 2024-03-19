#include<stdio.h>
int main(){
	int a[5];
	for(int i = 0; i <= 2; i++){
		scanf("%d", &a[i]);
	}
	if(a[0] == 5 && a[1] == 7 && a[2] == 5 ||
		a[0] == 7 && a[1] == 5 && a[2] == 5||
		a[0] == 5 && a[1] == 5 && a[2] == 7){
		printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		return 0;
	}
