#include <stdio.h>

int main(void){
	
	char a;
	int i,j,A[4][13]={0},n;\
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf(" %c %d",&a,&j);
		switch(a){
			case 'S':
				A[0][j-1]=1;
				break;
			case 'H':
				A[1][j-1]=1;
				break;
			case 'C':
				A[2][j-1]=1;
				break;
			case 'D':
				A[3][j-1]=1;
				break;
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			if(A[i][j]==0){
				switch(i){
					case 0:
						printf("S %d\n",j+1);
						break;
					case 1:
						printf("H %d\n",j+1);
						break;
					case 2:
						printf("C %d\n",j+1);
						break;
					case 3:
						printf("D %d\n",j+1);
						break;
				}
			}
		}
	}
	return 0;
}