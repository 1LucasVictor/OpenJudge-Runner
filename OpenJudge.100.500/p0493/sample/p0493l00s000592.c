#include<stdio.h>

int main(){
  	int n ;
  	scanf("%d",&n) ;
  	printf("%d\n",( (n/500)*1000)+( ( ( n-(500*(n/500) ) )/5 )*5 ) ) ;
	return 0 ;
}