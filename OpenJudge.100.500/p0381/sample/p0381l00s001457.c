#include<stdio.h>

int main (void){ 
	
	int n,x,count=0,i,s,t;
	for(;;){
	count = 0;
	scanf("%d %d",&n,&x);
	if(n == 0 && x == 0) break;
	for(i=1;i<=n;i++){
		for(s=1;s<=n;s++){
			for(t=1;t<=n;t++){
				
				if(i+s+t==x && i != t && t != s && s != i){
						count += 1;
				}
				}
			}
		}
	
	
	printf("%d\n",count/6);
	}
return 0;
}