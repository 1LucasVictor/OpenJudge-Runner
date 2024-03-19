#include <stdio.h>
#include <math.h>

int main(void) {

	int n;
	scanf("%d",&n);

	int a;
	int c=0,c2=0;//カウント
	int i,j;
	int s;

	for(i=0; i<n; i++) {

		scanf("%d",&a);
		
		s = (int)sqrt(a)+1;

		if (a>1) {
			
			if(a==2) c++;
			
			else if(a==3) c++;
			
			else if(a%2 != 0) {
				
				for(j=3; j <= s; j=j+2) {
					
					if(a%j==0){
						c2++;
					}
				}
				if(c2==0){
					c++;
				}
				c2=0;
			}
			else ;
		}
		else ;

	}

	printf("%d\n",c);

	return 0;

}
