#include<stdio.h>

int main(){
	int n,i,ans=0,on=0,zn=0;
	char s[100001];
	scanf("%s",s);
	for(i=0;s[i]!=0;i++){
		if(s[i]=='1')on++;
		else zn++;
		if(on>0&&zn>0){
			int tmp=(on<zn?on:zn);
			ans+=tmp*2;
			on-=tmp;
			zn-=tmp;
		}
	}
	printf("%d\n",ans);
	return 0;
}