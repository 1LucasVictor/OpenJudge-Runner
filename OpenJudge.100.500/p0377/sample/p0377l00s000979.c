#include <stdio.h>

int main(){

int card[4][13]={}; 

int n; 

int i; 

scanf("%d",&n);

char mark[n];

int rank[n];

for(i=1;i<=n;i++){

  scanf("%*c%c",&mark[i-1]);

  scanf(" %d",&rank[i-1]);

	}

int k=0;

for(k=0;k<=n-1;k++){
	
	if(mark[k]=='S'){

		card[0][rank[k]-1]=1;

		}

	if(mark[k]=='H'){

		card[1][rank[k]-1]=1;

		}

	if(mark[k]=='C'){

		card[2][rank[k]-1]=1;

		}

	if(mark[k]=='D'){

		card[3][rank[k]-1]=1;

		}

	}
	
int x,y;

for(x=0;x<=3;x++){

	for(y=0;y<=12;y++){

		if(card[x][y]==0){

			if(x==0)

				printf("S %d",y+1);

			if(x==1)

				printf("H %d",y+1);

			if(x==2)

				printf("C %d",y+1);

			if(x==3)

				printf("D %d",y+1);

			printf("\n");

			}

		}

	}

return 0;

}