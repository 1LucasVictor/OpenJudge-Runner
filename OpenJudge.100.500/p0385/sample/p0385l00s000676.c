#include <stdio.h>

int main(void){

	char mozi[1000];
	int count,sum;

	for(;;){

		sum=0;

		scanf("%s",mozi);

		if(mozi[0]=='0'){
			break;
		}

		for(count=0;mozi[count]!='\0';count++){


			sum += mozi[count];
			sum = sum -48;
			
		}
	
		printf("%d\n",sum);
		sum = 0;
		}


	return 0;
}