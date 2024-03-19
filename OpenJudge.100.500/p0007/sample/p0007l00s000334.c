#include <stdio.h>
#include <math.h>

int combination(int n,int m){
	int i,s=0;
	if(n>m*9)return 0;
	if(m==2)return 10-abs(n-9);
	for(i=0;i<10;i++){
		if(n-i>-1)s+=combination(n-i,m-1);
	}
	return s;
}

int main (){
	int n;
	while(scanf("%d",&n)!=EOF)printf("%d\n",combination(n,4));
	return 0;
}