#include <stdio.h>
int s[4][13];
int main(void){
	char c[5]="SHCD",d;
	int i,j,a,b,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf(" %c %d",&d,&b);
		for(j=0;j<4;j++){
			if(d==c[j]) a=j;
		}
		s[a][b]=1;
	}
	for(i=0;i<4;i++){
		for(j=1;j<13;j++){
			if(!s[i][j]) printf("%c %d\n",c[i],j);
		}
	}
	
	return 0;
}
