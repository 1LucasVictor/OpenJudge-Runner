#include <stdio.h>

int main(){
	int a,b,ans;
	scanf("%d%d",&a,&b);

	for(int i=1;i<100;i++){
		if(i==1)ans=a*i;
		else ans=a*i-i;
		if(ans>=b)break;
	}
	printf("%d\n",ans/a+(ans%a!=0?1:0));
	return 0;
}