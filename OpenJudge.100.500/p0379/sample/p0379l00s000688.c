#include<stdio.h>
int main(){
	int n,m;
	int Avectar[100][100];
	int Bvectar[100];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&Avectar[i][j]);
		}
	}
	for(int i=0;i<m;i++)scanf("%d",&Bvectar[i]);
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)sum+=Avectar[i][j]*Bvectar[j];
	printf("%d\n",sum);
	sum=0;
	}
	return 0;
}
