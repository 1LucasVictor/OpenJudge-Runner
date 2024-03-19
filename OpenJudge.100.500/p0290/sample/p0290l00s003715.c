#include <stdio.h> 
#include<stdbool.h>
#include<math.h>
  
bool isprime (int a){
	int j;
	
	if (a == 2)
		return true;
	
	if (a < 2 || (a%2==0))
		return false;
	
	j=3;	
	while(j<=sqrt(a)){
		if (a%j == 0)
			return false;
		j+=2;
	}
	return true;
}


int main() 
{ 
    int n,i,test,count=0;
    scanf("%d", &n);
    
    for (i=0; i<n; i++){
    	scanf("%d", &test);
    	if (isprime(test))
    		count++;
	}
    	
    printf("%d\n", count);
    
    return 0; 
} 

