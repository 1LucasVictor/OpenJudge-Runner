#include <stdio.h>

int main(){
	int a,b,ans;
	scanf("%d%d",&a,&b);

	ans=b-a;

	int ans2=(ans/(a-1)+(ans%(a-1)!=0?1:0))+1;
	printf("%d\n",ans2);
	
	return 0;
}