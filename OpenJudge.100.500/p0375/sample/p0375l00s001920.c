#include<stdio.h>

void call(int);

int main(){
	
	int n;
	
	scanf("%d",&n);
	
	call(n);
	
	return 0;
}

void call(int n){
	int x,i;
	
	for(i=1 ;i<=n ;i++){
		x = i;
		if( x%3 == 0){
			printf(" %d",i);
		}else if( x%10 == 3 ){
			printf(" %d",i);
		}else{
			for(; x>0;){
				x /= 10;
				if( x%10 ==3){
					printf(" %d",i);
					break;
				}
			}
		}
	}
	printf("\n");
}
