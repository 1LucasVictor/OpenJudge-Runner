//ABC174_B3
#include <stdio.h>
int main(){
	long int n,d;
	long int x,y;
	long int z=0;
	int cnt=0;
	
	scanf("%ld %ld",&n,&d);
	for(int i=0;i<n;i++){
		scanf("%ld %ld",&x,&y);
		z = x*x + y*y;
		if(z<=d*d)	cnt++;
	}
	
	printf("%d",cnt);
	
	return 0;
}
