#include <stdio.h>
#include <memory.h>

int ch(int i){
	switch(i){
		case 0:return 'S';
		case 1:return 'H';
		case 2:return 'C';
		case 3:return 'D';
	}
}

int main(void){
	int a[4][14],c,i,j,n;
	char b;
	memset(a,0,sizeof(a));
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf(" %c %d",&b,&c);
		if(b=='S')
			a[0][c]=1;
		else if(b=='H')
			a[1][c]=1;
		else if(b=='C')
			a[2][c]=1;
		else
			a[3][c]=1;
	}
	for(i=0;i<=3;i++){
		for(j=1;j<=13;j++){
			if(a[i][j]==0)
				printf("%c %d\n",ch(i),j);
		}
	}
	return 0;
}
