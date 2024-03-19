#include <stdio.h>

int countways (int,int);

int main (void)
{
	int n[1000],x[1000];
	int i,j,ways[1000];

	for(i=0;;i++){
		scanf("%d %d", &n[i],&x[i]);
		if(n[i]==0&&x[i]==0) break;
	}

	for(j=0;j<i;j++){
		ways[j]=countways(n[j],x[j]);
		printf("%d\n", ways[j]);
	}

	return 0;
}

int countways (int n,int x)
{
	int how_many;
	int i,j,k;

	for(i=1;i<=n;i++){
		for(j=i+1;j<=n;j++){
			if(x-i-j>0&&x-i-j<=n&&x-i-j>j){
				how_many++;
			}
		}
	}

	return how_many;
}