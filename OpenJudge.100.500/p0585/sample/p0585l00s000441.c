#include <stdio.h>
int main(){
	int a,b,t,i,ans=0;
	scanf("%d %d %d",&a,&b,&t);
	
	for(i=1;i<=(t/a);i++){
		if((i*a)<=t) ans=ans+b;
	}
	printf("%d\n",ans);
	return 0;
}