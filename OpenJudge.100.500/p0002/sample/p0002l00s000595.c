#include <stdio.h>

int main()
{
		int a=0, b=0, c=0;
		int N=0;
		int i;
		
		
		scanf("%d", &N );

		for( i=0; i<N; i++ ){
				scanf("%d %d %d", &a, &b, &c );
				if( a >= b && a >= c ){
						if( a*a == b*b + c*c ){
								printf("YES\n");
						}else{
								printf("NO\n");
						}
				}else if( b >= a && b >= c ){
						if( b*b == a*a + c*c ){
								printf("YES\n");
						}else{
								printf("NO\n");
						}
				}else{
						if( c*c == a*a + b*b ){
								printf("YES\n");
						}else{
								printf("NO\n");
						}
				}
		}
		return 0;
}