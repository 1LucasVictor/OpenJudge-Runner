#include <stdio.h>

int main(){
	int data;
	int a,b,c,d;
	int pair = 0;

	while( scanf("%d",&data) != EOF ){
		pair = 0;
		
		for(a=0; a<=9; a++){
			for(b=0; b<=9; b++){
				for(c=0; c<=9; c++){
					for(d=0; d<=9; d++){
						if( data == a + b + c + d){
							pair++;
						}
					}
				}
			}
		}

		printf("%d\n",pair);
	}

	return 0;
}