#include<stdio.h>

int main(void){
	int a,b,c,i,cnt = 0;
	scanf("%d %d %d",&a,&b,&c);
	if(a <= c){
		for( i = a;i <= b; i++){
			if(c % i == 0) {
//				printf("%d\n",i);
				cnt++;
			}
		}
	}
	printf("%d\n",cnt);
	
	return 0;
}