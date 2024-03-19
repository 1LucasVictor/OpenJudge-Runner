#include<stdio.h>
int gcd(int x,int y){
    if(x==0)return y;
    return gcd(y%x,x);
}
int main(void){
	int i,a,b,c;
	while(scanf("%d%d",&a,&b)!=EOF){
	    c=gcd(a,b);
	    printf("%d %d\n",c,a/c*b);
	}
	return 0;
}