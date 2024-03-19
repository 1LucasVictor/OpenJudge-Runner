#include <stdio.h>

#include <math.h>


int main(void){
	
int n,d,ans=0;
	
scanf("%d %d",&n,&d);


if(n==0)ans=1;
else ans=100;
for(int i=n;i>1;i--)ans*=100;
printf("%d\n",ans*d);
return 0;

}

