#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,a[4][14];
	char s[2];
	int h;

	for(int i=0;i<4;i++){
		for(int j=1;j<14;j++){
			a[i][j]=0;
		}
	}

	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%s %d",s,&h);
		switch(s[0]){
		case 'S':
			a[0][h]=1;
			break;
		case 'H':
			a[1][h]=1;
			break;
		case 'C':
			a[2][h]=1;
			break;
		case 'D':
			a[3][h]=1;
			break;
		}
	}
	char S[4]={'S','H','C','D'};
	for(int i=0;i<4;i++){
		for(int j=1;j<14;j++){
			if(a[i][j]==0){
				printf("%c %d\n",S[i],j);
			}
		}
	}

	return 0;
}
