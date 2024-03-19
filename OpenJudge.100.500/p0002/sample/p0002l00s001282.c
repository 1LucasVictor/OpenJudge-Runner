#include<stdio.h>
int main()
{
       int n , a , b , c , i ;
       
       while( scanf("%d",&n) != EOF )
       {
		   for( i = 1 ; i <= n ; i++ )
		   {
			   scanf("%d ",&a);
			   scanf("%d ",&b);
			   scanf("%d",&c);
			   
			   if( a*a + b*b == c*c )
			     puts("YES");
			     
			   else
			     puts("NO");
			     
			 }
			 
		 }
		 
		   	   
       return 0 ;
}