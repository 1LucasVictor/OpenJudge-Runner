#include <stdio.h>
 
int main(void){
	char str[1000];
	int digit,check_times,check_digit,check_num;
	int x = 0;
	int y = 0;
	int z = 0;
	int ans = 0;
	int x_count = 0;
	
	fgets(str,sizeof(str),stdin);
	sscanf(str,"%d %d",&digit,&check_times);
	
	for(int i = 0; i < check_times; i++){
		fgets(str,sizeof(str),stdin);
		sscanf(str,"%d %d",&check_digit,&check_num);
		switch(check_digit){
			case 1:
				if(x == 0){
					x = check_num;
					x_count ++;
				}else if(x != check_num){
					ans = -1;
				}
				break;
			case 2:
				if(y == 0){
					y = check_num;
				}else if(y != check_num){
					ans = -1;
				}
				break;
			case 3:
				if(z == 0){
					z = check_num;
				}else if(z != check_num){
					ans = -1;
				}
				break;
			default:
				break;
		}
	}
	
	switch(digit){
		case 3:
			if(x == 0){
				if(x_count == 0){
					x = 1;
				}else{
					ans = -1;
				}
			}
			x = x * 100;
			y = y * 10;
			z = z;
			break;
		case 2:
			if(x == 0){
				if(x_count == 0){
					x = 1;
				}else{
					ans = -1;
				}
			}
			x = x * 10;
			y = y;
			break;
		case 1:
			x = x;
			break;
		default:
			break;
	}
	
	if(ans == 0){
		ans = x + y + z;
	}
	
	printf("%d\n",ans);
	
	return 0;
}
