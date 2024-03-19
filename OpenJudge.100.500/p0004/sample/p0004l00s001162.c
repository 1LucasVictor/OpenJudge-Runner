#include <stdio.h>

int gcd(int,int);
int lcm(int,int);

int main(){
	int x,y;
	while(scanf("%d %d",&x,&y)>0){
		printf("%d %d\n",gcd(x,y),lcm(x,y));
	}
	
	return 0;
}

int gcd(int x,int y){
	if(y==0)return x;
	if(x==0)return y;
	if(x>y)return gcd(y,x%y);
	else return gcd(x,y%x);
}
int lcm(int x,int y){
	return x/gcd(x,y)*y;
}