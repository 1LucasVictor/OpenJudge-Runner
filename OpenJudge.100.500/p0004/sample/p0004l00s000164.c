#include<stdio.h>

int main(){
	int a,b,c,d,e,m,n;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(a<b){c=b;d=a;}
		else{c=a;d=b;}
		while(1){
			if(c%d==0){
				m=d;
				n=a/m*b;
				break;}
			else{
				e=c;
				c=d;
				d=e%d;}}
		printf("%d %d\n",m,n);}
	return 0;
}