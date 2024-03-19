#include <stdio.h>
#include <string.h>
#define rep(i,l,n) for(i=l;i<n;i++)

int main(void){
	char b[201],a[201];
	int m,i,h,len,j;
	
	while(1){
		scanf("%s",b);
		if(b[0]=='-') break;
		len=strlen(b);
		
		scanf("%d",&m);
		
		rep(i,0,m){
			scanf("%d",&h);
			rep(j,0,len-h) a[j]=b[j+h];
			rep(j,len-h,len) a[j]=b[j-len+h];
			rep(j,0,len) b[j]=a[j];
		}
		rep(i,0,len) printf("%c",b[i]);
		printf("\n");
	}
	return 0;
}