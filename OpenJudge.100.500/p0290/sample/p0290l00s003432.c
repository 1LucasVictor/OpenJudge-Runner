#include  <stdio.h>
#include  <math.h>
int prime(int x)
{ 
	int temp,i,k;  
	temp=(int)(sqrt(x));  
	for(i=2;i<=temp;++i)      
	if(x%i==0)    
	{ k=0; 
		break; 
	}      
	if(i>temp)      
	k=1;
	return k;    
	}
int main(){        
	int x;    
	int i,n,count=0;  
	scanf("%d",&n);  
	for(i=0;i<n;i++)   {        
	scanf("%d",&x);         
	if(prime(x))  
	count++;   
	}    
	printf("%d\n",count);
	return 0;
}
