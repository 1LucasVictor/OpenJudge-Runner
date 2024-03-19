#include<stdio.h>
int main(){

	int a[100],b[100],c;
	int i = 0 ,tra = 0;
	
	while (scanf("%d",&c) != EOF){
		if(c >= 1 && c<=10){
		
			a[tra] = c;
			tra ++;
	
		}
		else if(c == 0){
			tra--;
			b[i] = a[tra];
			i++;
		}
	}
		
	for( c = 0 ;c < i; c++){
		printf("%d\n",b[c]);
	}
	return 0;
}
	