#include<stdio.h>
int main(void)
{
	int n,t[4][13]={0};
	int i,j;
	char m;
	scanf("%d",&n);
		for(i=0;i<n*2;i++){
			scanf("%c %d",&m,&j);
			if(m=='S'){
				t[0][j-1]=1;
			}else if(m=='H'){
				t[1][j-1]=1;
			}else if(m=='C'){
				t[2][j-1]=1;
			}else if(m=='D'){
				t[3][j-1]=1;
			}
		}
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			if(t[i][j]==0){
				if(i==0){
					printf("S");
				}else if(i==1){
					printf("H");
				}else if(i==2){
					printf("C");
				}else if(i==3){
					printf("D");
				}
				printf(" %d\n",j+1);
			}
		}
	}
	return 0;
}