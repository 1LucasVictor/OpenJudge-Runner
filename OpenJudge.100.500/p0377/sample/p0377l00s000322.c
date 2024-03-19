#include <stdio.h>
int main(void)
{ 
	int n,i,k[4][13],w,j;
	char md,dat[4];
	
	dat[0]='S'; dat[1]='H'; dat[2]='C'; dat[3]='D';
	
	for(i=0 ; i<13 ; i++){
		k[0][i]=0;
		k[1][i]=0;
		k[2][i]=0;
		k[3][i]=0;
	}
	scanf("%d",&n);
	
	for(i=1 ; i<=n*2 ; i++){
		scanf("%c %d",&md,&w);
		switch(md){
			case 'S':
				k[0][w-1]=1;
				break;
			case 'H':
				k[1][w-1]=1;
				break;
			case 'C':
				k[2][w-1]=1;
				break;
			case 'D':
				k[3][w-1]=1;
				break;
		}
	}
	
	for(i=0 ; i<4 ; i++){
		for(j=0 ; j<13 ; j++){
			if(k[i][j]==0)
				printf("%c %d\n",dat[i],j+1);
		}
	}
	
	return 0;
}