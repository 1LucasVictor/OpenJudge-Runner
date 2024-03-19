#include <stdio.h>

int main(void){
	int ikidomari[10];
	int sharyou,daisuu=0;
	
	while(scanf(" %d",&sharyou) != EOF){
		if(sharyou != 0){
			ikidomari[daisuu]=sharyou;
			daisuu++;
		}else{
			daisuu--;
			printf("%d\n",ikidomari[daisuu]);
		}
	}
	return 0;
}