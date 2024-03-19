#include<stdio.h>
#include<string.h>

#define N 100000

int main(){
	char S[N+1];
	int i,r=0,b=0,ans;
	scanf("%s",&S);
	for(i=0;i<N;i++){
		if(S[i]=='\0')break;
		if(S[i]=='0')r++;
		else b++;
	}
	if(r<b)ans= r*2;
	else ans = b*2;
	printf("%d\n",ans);
	return 0;
}
