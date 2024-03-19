#include <stdio.h>
#include <string.h>
#include <math.h>
#define rep(i,l,n) for(i=l;i<n;i++)

int main(void){
	int n,i,d[3],c;
	scanf("%d",&n);

	rep(i,0,n){
		scanf("%d %d %d",&d[0],&d[1],&d[2]);
		if(d[1]<d[2]) c=d[1]; d[1]=d[2]; d[2]=c;
		if(d[0]<d[1]) c=d[0]; d[0]=d[1]; d[1]=c;
		if(d[0]*d[0]-d[1]*d[1]-d[2]*d[2]){
			printf("NO\n");
		}else printf("YES\n");
	}
	return 0;
}