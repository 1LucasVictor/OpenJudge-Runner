#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)

char s[100010];
int ans;
int main(){
	scanf("%s",s);
	int n=strlen(s);
	
	char crr=s[0];
	int cnt=1;
	rep(i,1,n){
		if(s[i]==crr)cnt++;
		else if(cnt){
			cnt--;
			ans+=2;
		}else{
			crr=s[i];
			cnt=1;
		}
	}
	printf("%d",ans);
}