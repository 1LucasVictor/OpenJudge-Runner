#include<stdio.h>

int main(){
	int a,b,ans[3],i,l,t;
	
	for(i=0;i<3;i++){
		scanf("%d %d",&a,&b);
		t=a+b;
		for(ans[i]=1;;){
			t=(t-t%10)/10;
			if(t>0)
			ans[i]++;
			else
			break;
		}
	}
	
	for(i=0;i<3;i++)printf("%d\n",ans[i]);
	
	return 0;
}