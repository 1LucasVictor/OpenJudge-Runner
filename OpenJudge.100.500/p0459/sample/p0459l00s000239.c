#include<stdio.h>
#include<math.h>
int main(){

	int x,y;

	scanf("%d%d",&x,&y);

	// 2c + 4t = y and 2c + 2t = 2x, (y - 2x) / 2  = t, x - t
	if(y == 2*x) printf("Yes\n");
	else{
		if(y > 2*x && (y-2*x) % 2 == 0 ){
			int t = (y-2*x) / 2;
			int c = x - t;
			if(c >= 0) {
				printf("Yes\n");
			}else{
				printf("No\n");
			}
		}else{
				printf("No\n");
		}
	}



}
