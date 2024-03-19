/// ****** Property of vipulks ****** \

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define ll long long

int main(){
	ll n,i,j,k,q;
	//scanf("%lld",&t);
	q=1;
	char s[50],t[50];
	bool ok=true;
	while(q--){
		//scanf("%lld",&n);
		scanf("\n%s\n%s",s,t);
		ll n=strlen(s),m=strlen(t);
		if(m!=n+1)
			printf("No\n");
		else{
			for(i=0;i<n && ok;i++){
				ok=s[i]-t[i]==0?true:false;
			}
			if(ok && t[n]>=97 && t[n]<=122)
				ok=true;
			else
				ok=false;
		}
		if(ok)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}