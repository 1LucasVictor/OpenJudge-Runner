#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i,j,k,l,n,ans[15],ans2[15],flag=0,flag2=0;

int out(){
	flag--;
	return ans[flag];
}
void in(int n){
	ans[flag]=n;
	flag++;
}

int main(){
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			ans2[flag2]=out();
			flag2++;
		}else{
			in(n);
		}
	}
	for(i=0;i<flag2;i++)printf("%d\n",ans2[i]);
	return 0;
}