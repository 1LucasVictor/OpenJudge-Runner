#include <stdio.h>
#include <time.h>

int main(){
	int a,b,c,d;
	int x[256],y[256];
	int p=1;
	
	scanf("%d %d %d",&a,&b,&d);
	
	c=a;
	if(a>b){
	c=b;
	}
	
	x[0]=1;
	for(int i=2;i<=c;i++){
		if(a%i==0&&b%i==0){
			x[p]=i;
			p++;
		}
	}
	
	printf("%d",x[d-1]);
	
	return 0;
}