#include <stdio.h>
int main( void ){
	int n,a,s,m;
	for(;scanf("%d",&n),n;){
		for(s=0,m=-1e7;n--;s+=a,s>m?m=s:s<0?s=0:0)scanf("%d",&a);
		printf("%d\n",m);
	}
	return 0;
}