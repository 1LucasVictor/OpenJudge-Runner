#include <stdio.h>
#include <string.h>
char t[1010];
int main(){
	int i;
	int n;
	int ans;
	while(scanf("%s",&t)){
		n=strlen(t);
		ans=0;
		if(n==1&&t[0]=='0') break;
		for(i=0;i<n;i++){
			ans+=t[i]-'0';
		}
		printf("%d\n",ans);
	}
	return 0;
}

