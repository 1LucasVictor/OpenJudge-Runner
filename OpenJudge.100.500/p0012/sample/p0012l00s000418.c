#include<stdio.h>

int main(void){

	int car[10];
	int kazu = 0;
	int n;

	while(scanf("%d",&n)!=EOF){

		if(n == 0){
			printf("%d\n",car[kazu]);
			kazu--;
		}
		else{
			kazu++;
			car[kazu] = n;
		}
	}

	return 0;
}