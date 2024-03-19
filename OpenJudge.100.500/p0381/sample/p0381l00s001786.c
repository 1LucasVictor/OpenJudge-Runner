#include<stdio.h>
main(void)
{
	int n,x,a,b,c,S;
	
	while(EOF !=scanf("%d %d",&n,&x)){
		if(n==0 && x==0) break;
		S=0;
		for(a=1;a<=n;a++){
			for(b=a+1;b<=n;b++){
				for(c=b+1;c<=n;c++){
					if(a+b+c==x)S+=1;
				}
			}
		}
		printf("%d\n",S);
	}
	return 0;
}