#include<stdio.h>

int main(void){
	int n,x,a,b,c,ret;
	
	for(;;){
		scanf("%d %d",&n,&x);
		if(n==0&&x==0)break;
		
		ret = 0;
		for(c=1;c<=n;++c){
			for(b=1;b<c;++b){
				a=x-c-b;
				if(a<b&&a>0){
					ret++;
				}
			}
		}
		printf("%d\n",ret);
		
		}
		return 0;
	}	