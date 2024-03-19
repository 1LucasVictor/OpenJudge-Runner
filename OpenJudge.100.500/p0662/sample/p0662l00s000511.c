#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int min(int x,int y){return x<y? x: y;}
int max(int x,int y){return x<y? y: x;}

int main(void){
	int a,b,c,d,ans;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	ans = min(b,d)-max(a,c);
	if(ans<0) ans=0;
	printf("%d",ans);
	return 0;
}