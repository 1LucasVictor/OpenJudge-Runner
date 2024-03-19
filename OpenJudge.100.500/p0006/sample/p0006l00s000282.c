#include <stdio.h>

int main(void)
{
	int n,i,s=100000;
	scanf("%d",&n);
	for(i=0 ; i<n ; i++){
		s*=1.05;
		if(s%1000>0){
		s-=s%1000;
		s+=1000;
	}
	}
	printf("%d\n",s);
	return 0;
}