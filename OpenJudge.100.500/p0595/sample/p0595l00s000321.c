#include<stdio.h> 
#include<stdlib.h>



int main ()  {
	int i,nb,a,b,k ;
	
	scanf("%d %d %d",&a,&b,&k) ;
	nb=0 ;
	i=101 ;
	while (nb<k ) {
	i-- ;
	if (a%i==0 && b%i==0)	{
		nb++ ;
		}
		

	}
	printf("%d",i) ;
	
	return(0) ;
}