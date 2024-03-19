#include <stdio.h>

int main()
{
    long n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
    	int gcd,lcm;
    	int i,j,max,min;
    	if(n>m){
    		max=n;
    		min=m;
		}else{
			max=m;
    		min=n;
		}
		for(i=1;i<=min;i++){
			if((max%i==0)&&(min%i==0))	gcd=i;
		}
		for(j=1;;j++){
			if((max*j)%min==0){
				lcm=max*j;
				break;
			}
		}
		printf("%d %d\n",gcd,lcm);
	}
    return 0;
}