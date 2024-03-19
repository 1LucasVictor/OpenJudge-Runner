#include <stdio.h>

int main(void) {
	int x,n,i1,i2,i3,ans= 0;
	
	while(1){
		
	
		scanf("%d",&n);
		scanf("%d",&x);
		if(n == 0 && x == 0){
			break;
		}
	
		for(i1= 1;i1 <= n; i1++){
			for(i2 = 1;i2 <= n;i2++){
				for(i3 = 1;i3 <= n;i3++){
					
					if( i1 != i2 && i1 != i3 && i2 != i3 && i1 + i2 + i3 == x){

						ans += 1;
					}			
				}
			}
		}
		printf("%d\n",ans / 6);
		
	}
	return 0;
}