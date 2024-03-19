#include <stdio.h>

int main(void){

	int n;
	int v[4][13];
	int i,j;
	char mark;
	int num;
	int marknum;
	
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			v[i][j]=0;
		}
	}
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf(" %c",&mark);
		scanf("%d",&num);
		
		switch(mark){
			case 'S'  : marknum=0; break;
			case 'H'  : marknum=1; break;
			case 'C'  : marknum=2; break;
			case 'D'  : marknum=3; break;
		}
			
		v[marknum][num-1]=1;
	}

	for(i=0;i<13;i++){
		if(v[0][i]==0)
		printf("S %d\n",i+1);
	}
	
	for(i=0;i<13;i++){
		if(v[1][i]==0)
		printf("H %d\n",i+1);
	}
	
	for(i=0;i<13;i++){
		if(v[2][i]==0)
		printf("C %d\n",i+1);
	}
	
	for(i=0;i<13;i++){
		if(v[3][i]==0)
		printf("D %d\n",i+1);
	}
	return 0;
}