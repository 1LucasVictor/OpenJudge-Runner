#include <stdio.h>

int main(void)
{
	int n,a,b,c,d,sum,count;
	
	
	while(scanf("%d",&n) != EOF){
	count = 0;
	for(a=0;a<10;a++){
		for(b=0;b<10;b++){
			for(c=0;c<10;c++){
				for(d=0;d<10;d++){
					sum = 0;
					
					sum = a+b+c+d;
					
					if(sum == n){
						count += 1;
					}else{
						;
					}
				}
				
			}
		}
	}
	printf("%d\n",count);
	}
	
	
	return 0;
}