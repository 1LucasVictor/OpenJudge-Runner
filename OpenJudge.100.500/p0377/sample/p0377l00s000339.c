#include<stdio.h>

int main(void){

	int n , num;
	short int card[4][13];
	int i,j;
	char s;

	scanf("%d",&n);

	//for(i=0;i<4;i++)
	//	for(j=0;j<13;j++)
	//		card[i][j] = 0;

	for(i=0;i<n;i++){
		scanf(" %c %d",&s,&num);

		if(s == 'S')
			card[0][num-1]=1;
		else if(s=='H')
			card[1][num-1]=1;
		else if(s=='C')
			card[2][num-1]=1;
		else
			card[3][num-1]=1;

	}

	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			if(card[i][j] != 1){
				if(i == 0)
					printf("S ");
				else if(i==1)
					printf("H ");
				else if(i==2)
					printf("C ");
				else
					printf("D ");

				printf("%d\n",j+1);

			}
		}
	}

	return 0;

}
				