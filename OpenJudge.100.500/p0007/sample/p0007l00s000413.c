#include <stdio.h>

int main(void)
{	
	
	int a,b,c,d,n,sum,count;
	
	while(scanf("%d",&n) != EOF){;
	sum =0;
	count = 0;
	for(a=0;a<=9;a++){
	 for(b=0;b<=9;b++){
	  for(c=0;c<=9;c++){
	   for(d=0;d<=9;d++){
	   	
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