#include<stdio.h>
#include<math.h>
	int main(){
		long long a,b,k,x,y;
		
		 	scanf("%lld" "%lld", &a, &b);
			k=(a+b)/2;
			x= abs(a-k);
			y= abs(b-k);
			if(x==y)
			{printf("%lld", k);
			}
			else if(x!=y)
			{printf("IMPOSSIBLE");
			}
		 	
		 	
		 	
		 	
		 
		
		
		
		
		
		
		
		
			return 0;
		
	}