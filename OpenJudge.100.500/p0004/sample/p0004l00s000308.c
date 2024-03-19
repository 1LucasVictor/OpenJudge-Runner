#include<stdio.h>

int euclidean(int,int);

int main(){
	int n,m,div,mul;
	while(scanf("%d %d",&n,&m)!=-1){
		if(m>n)div=euclidean(m,n);
		else div=euclidean(n,m);
		n/=div;
		m/=div;
		mul=div*n*m;
		printf("%d %d\n",div,mul);
	}
	return 0;
}

int euclidean(int n,int m){
	int a;
	while(m%n!=0){
	a=m%n;
	m=n;
	n=a;
	}
	return n;
}