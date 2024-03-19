#include <stdio.h>

int main (void)
{
	int a,b,c,i,x;
	
	int ans=0;
	
	scanf("%d %d %d\n",&a,&b,&c);
	
	for( i=a ; i<=b ; i++ ){

	
		if( (c%i) == 0 ){
			
			ans++;
		
		}else{
			
		}	
		
	}
	
	printf("%d\n",ans);
	
	return 0;
}