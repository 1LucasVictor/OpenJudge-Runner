#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int n,i,j,stack[15],ans[15],flag=0,aflag=0;

int main(){
	//for(i=0;i<15;i++)stack[i]=0,ans[i]=0;
	while(scanf("%d",&n)!=EOF){
	//for(i=0;i<8;i++){
		//scanf("%d",&n);
		if(n==0){
			flag--;
			ans[aflag]=stack[flag];
			//printf("\nans[%d]=%d \n",aflag,ans[aflag]);
			aflag++;
		}else{
			stack[flag]=n;
			//printf("\nstack[%d]=%d \n",flag,stack[flag]);
			flag++;
			
		}
	}
	for(i=0;i<aflag;i++)printf("%d\n",ans[i]);
	return 0;
}