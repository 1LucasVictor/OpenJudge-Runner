#include<stdio.h>

int Min(int a,int b){
	if (a>b) return b;
	else return a;}
int main(){
	int x,n;
	while(1){
	scanf("%d%d",&x,&n);
	int i=0,j=0,k=0,sum=0;
	if(x==0&&n==0) break;
	for(i=Min(x,(n-3));i>n/3;--i)
		for(j=i-1;j>(n-i)/2;--j)
			for(k=j-1;k>0;--k)
				if(i+j+k==n) ++sum;
	printf("%d\n",sum);}
	return 0;
}
