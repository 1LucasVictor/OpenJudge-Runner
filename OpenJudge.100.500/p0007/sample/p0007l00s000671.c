#include<stdio.h>

int souwa(int);

int main(){
	int n;
	while(scanf("%d",&n)!=-1){
		printf("%d\n",souwa(n));
	}
	return 0;
}

int souwa(int n){
	int i,j,k,l,cnt=0;
	for(i=0;i<10;i++)
		for(j=0;j<10;j++)
			for(k=0;k<10;k++)
				for(l=0;l<10;l++){
					if(n==i+j+k+l)cnt++;
					}
	return cnt;
}