#include <stdio.h>
#define NUM 2

int main(void){

	int n[NUM];
	int a,b,c,d;
	int i;
	int count=0;

	for(i=0;i<NUM;i++){
		scanf("%d",&n[i]);
	}

	for(i=0;i<NUM;i++){
		for(a=0;a<10;a++){
			for(b=0;b<10;b++){
				for(c=0;c<10;c++){
					for(d=0;d<10;d++){
						if(a+b+c+d == n[i]){
							count++;
						}
					}
				}
			}
		}
		printf("%d\n",count);
		count = 0;
	}

	return 0;
}