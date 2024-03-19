#include <stdlib.h>
#include <stdio.h>

int main(){
	int n;
	int data[4][13];
	int i, j;
	char c;
	int num;


	scanf("%d", &n);


	for(j=0;j<4;j++){
		for(i=0;i<13;i++){
			data[j][i]=0;
		}
	}


	for(i=0; i<n; i++){

		scanf("%*c%c %d", &c, &num);

		switch(c){
			case 'S':
				data[0][num-1]=1;
				break;

			case 'H':
				data[1][num-1]=1;
				break;

			case 'C':
				data[2][num-1]=1;
				break;

			case 'D':
				data[3][num-1]=1;
				break;
		}

	
	}

	for(j=0; j<4; j++){
		for(i=0; i<13; i++){
			if(data[j][i] == 0){
				switch(j){
					case 0:
					printf("S %d\n", i+1);
					break;

					case 1:
					printf("H %d\n", i+1);
					break;

					case 2:
					printf("C %d\n", i+1);
					break;

					case 3:
					printf("D %d\n", i+1);
					break;


				}
			}
		}
	}

	
	return 0;

}
