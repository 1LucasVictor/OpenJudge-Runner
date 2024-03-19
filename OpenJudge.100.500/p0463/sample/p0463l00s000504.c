/// ****** Property of vipulks ****** \

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define ll long long

int main(){
	ll t,n,i,j,k,ans,a,b,c,d;
	t=1;//scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		i=n%10;
		if(i==2 || i==4 || i==5 || i==7 || i==9)
			printf("hon\n");
		else if(i==0 || i==1 || i==6 || i==8)
			printf("pon\n");
		else if(i==3)
			printf("bon\n");
	}
	return 0;
}