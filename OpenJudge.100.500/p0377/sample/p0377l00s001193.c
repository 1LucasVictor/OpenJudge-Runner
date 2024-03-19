#include <stdio.h>
int main(void) {
	int c[4][13] = {0};
	int m,r,t,i,j;
	char s;
	char u[4] = "SHCD";
	scanf("%d\n",&t);
	for(i=t;i;i--){
		scanf("%c %d\n",&s, &r);
		switch(s){
		case 'S':m=0;break;
		case 'H':m=1;break;
		case 'C':m=2;break;
		case 'D':m=3;break;
		}
		c[m][r-1] = 1;
	}
	for(;i<=3;i++){
		for(j=0;j<=12;j++){
			if(c[i][j]){continue;}
			printf("%c %d\n",u[i],j+1);
		}
	}
	return 0;
}