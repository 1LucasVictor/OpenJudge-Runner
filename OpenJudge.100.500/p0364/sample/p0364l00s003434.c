#include<stdio.h>

main(){
	int a, W, H, x, y, r;
	
	scanf("$d %d %d %d %d", W, H, x, y, r);
	
	if(x+r <= W){
		if(y+r <= H){
			if(x-r >= 0){
				if(y-r >= 0)
					a = 1;
	}}}
		
	if(a == 1)
		printf("Yes\n");
		
	else
		printf("No\n");
		
	
		
}