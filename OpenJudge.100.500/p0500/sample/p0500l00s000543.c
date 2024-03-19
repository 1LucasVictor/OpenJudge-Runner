#include <stdio.h>

int d[9],c[9];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++)scanf("%d%d",d+i,c+i);
	int l,r;
	if(n==1)l=0,r=10;
	if(n==2)l=10,r=100;
	if(n==3)l=100,r=1000;
	
	for(int x=l;x<r;x++){
		char s[9];
		sprintf(s,"%d",x);
		int flag=1;
		for(int i=0;i<m;i++)flag&=s[d[i]-1]-'0'==c[i];
		if(flag){
			printf("%d",x);
			return 0;
		}
	}
	puts("-1");
}