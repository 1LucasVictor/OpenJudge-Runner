#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define rep(index,num) for(int index=0;index<num;index++)
#define eps 1e-15
typedef long long ll;
int main(){
	int n,count5=0,count7=0;
	rep(i,3){
		scanf("%d",&n);
		if(n==5) count5++;
		if(n==7) count7++;
	}
	if(count5==2&&count7==1) printf("YES\n");
	else printf("NO\n");
	return 0;
}
