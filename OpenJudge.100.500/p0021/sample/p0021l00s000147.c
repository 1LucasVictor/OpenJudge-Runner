#include <stdio.h>
int main( void ){
	int n,a,s,m;
	for(;scanf("%d",&n),n;printf("%d\n",m))
		for(s=0,m=-10000000;n--;){
			scanf("%d",&a);
			s += a;
			if( s > m ) m = s;
			if( s < 0 ) s = 0;
		}
	return 0;
}