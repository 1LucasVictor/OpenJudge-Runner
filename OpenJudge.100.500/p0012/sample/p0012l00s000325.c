#include <stdio.h>

int main(void){

	int Cars[10];
	int i = 0;
	int Temp;
	
	while(scanf("%d", &Temp) == 1){
		if(Temp == 0){
			i--;
			printf("%d\n",Cars[i]);
		}else{
			Cars[i] = Temp;
			i++;
		}
	}
		
	return 0;
}