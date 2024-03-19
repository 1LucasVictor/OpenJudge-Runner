#include <stdio.h>

int main()
{
	int n;
	int a,b,c,d;
	int count;
	int sum;
	
	while(scanf("%d",&n)==1){
		count=0;
		if(n<=36){
			for(a=0;a<=9;a++){
				for(b=0;b<=9;b++){
					for(c=0;c<=9;c++){
						for(d=0;d<=9;d++){
							sum=a+b+c+d;
							if(n==sum)count++;
						}
					}
				}
			}
			printf("%d\n",count);
		}
		else printf("%d\n",count);
	}
	return 0;
}