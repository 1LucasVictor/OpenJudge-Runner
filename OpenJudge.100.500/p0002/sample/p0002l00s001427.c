#include<stdio.h>

int main(){
	//freopen("in/0003.txt","r",stdin);
	int n,a,b,c,m;
	int yes;
	scanf("%d",&n);
	while(n-->0){
		scanf("%d %d %d",&a,&b,&c);
		yes=0;
		if(a+b>c && a+c>b && b+c>a && abs(a-b)<c && abs(a-c)<b && abs(c-b)<a){
			if(a>b && a>c){
				yes=a*a==b*b+c*c;
			}
			else if(b>c){
				yes=b*b==a*a+c*c;
			}
			else{
				yes=c*c==a*a+b*b;
			}
		}
		printf("%s\n", yes? "YES":"NO");
	}
	return 0;
}