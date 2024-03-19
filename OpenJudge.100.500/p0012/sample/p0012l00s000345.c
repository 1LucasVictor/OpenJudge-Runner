#include <stdio.h>

int main(){
	int stock[11];
	int i = 0;
	int n;
	
	while(scanf("%d",&n) != EOF){
		if(n == 0){
			printf("%d\n",stock[i]);
			i--;
		}else{
			i++;
			stock[i] = n;
		}
	}
	
	return 0;
}