#include <stdio.h>

int main(void)
{
	int n,i,s;
	s=100000;
	scanf("%d",&n);
	for(i=1 ; i<=n ; i++){
		s*=1.05;
		}
	if(s%10000!=0){
		s-=s%10000;
		s+=10000;
	}
	printf("%d\n",s);
	return 0;
}