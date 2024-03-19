#include<stdio.h>

int main(){
	
	int num, a, b, c, ans;
	
	while(1){
		ans = 0;
		if(scanf("%d",&num) == EOF){
			
			break;
			
		}
		for(a = 0; a <= 9; a++){
			for(b = 0; b <= 9; b++){
				for(c = 0; c <= 9; c++){
					if(((num - c - b - a) >= 0) && ((num - c - b - a) <= 9)){
						ans++;
					}
				}
			}
		}
		
		printf("%d\n", ans);
		
	}
	
    return 0;
}