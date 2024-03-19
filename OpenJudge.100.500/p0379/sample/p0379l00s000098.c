#include<stdio.h>
int main(){
	int i,j,H,W,a[100][100],b[100];
	long long int t;
	scanf("%d %d",&H,&W);
	for(i=0;i<H;i++){
		for(j=0;j<W;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<W;i++)scanf("%d",&b[i]);
	for(i=0;i<H;i++){
		t=0;
		for(j=0;j<W;j++)t+=a[i][j]*b[j];
		printf("%d\n",t);
	}
	return 0;
}
	