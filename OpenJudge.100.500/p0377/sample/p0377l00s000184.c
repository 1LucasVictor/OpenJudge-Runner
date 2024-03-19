#include <stdio.h>

int main(void) {

	int a[4][13];
	int n,i,j,x,y;
	char c;
	
	scanf("%d",&n);
	
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			a[i][j]=0;
		}
	}
		
	for(i=0;i<n;i++){
		scanf("%s%d",&c,&y);
		if(c=='S'){
			x=0;
		}else if(c=='H'){
			x=1;
		}else if(c=='C'){
			x=2;
		}else{
			x=3;
		}
		a[x][y-1]=1;
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			if(a[i][j]==0){
				if(i==0){
					c='S';
				}else if(i==1){
					c='H';
				}else if(i==2){
					c='C';
				}else{
					c='D';
				}
				printf("%c %d\n",c,j+1);
			}
		}
	}
	return 0;
}