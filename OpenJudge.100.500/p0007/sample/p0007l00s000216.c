#include <stdio.h>

int main(){
	int a,b,c,d,cnt,num;

	while(scanf("%d",&num) != EOF){
		cnt = 0;

		for(a = 0;a <= 9;a++){
			for(b = 0;b <= 9;b++){
				for(c = 0;c <= 9;c++){
					for(d = 0;d <= 9;d++){
						if(a + b + c + d == num){
							cnt++;
						}
					}
				}
			}
		}

		printf("%d\n",cnt);
	}

	return 0;
}