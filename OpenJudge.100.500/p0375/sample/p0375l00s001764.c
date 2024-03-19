#include<stdio.h>
void call(int n);
int cas, loop;
int main(){
	int n;
	cas = 0;
	loop = 1;
	scanf("%d", &n);
	call(n);
}

void call(int n){
	int i = 1;
	int x;
	while(loop){
		switch(cas){
			case 0:	// CHECK_NUM
				x = i;
				if(x%3==0){
					printf(" %d", i);
					cas = 2;
					break;
				}
				cas = 1;
				break;
			case 1:	// INCLUDE3
				if(x%10 == 3){
					printf(" %d", i);
					cas = 2;
					break;
				}
				x /= 10;
				if(x) cas = 1;
				cas = 2;	
				break;
			case 2:	// END_CHECK_NUM
				if(++i <= n){
					cas = 0;
					break;
				}
				printf("\n");
				loop = 0;
				break;
			default:
				break;	
		}
	}
}
