#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	if(n > 81) printf("No\n");
	else if(n <= 9) printf("Yes\n");
	else{
		int ok = 0;
		for(int i = 2; i <= 9; i++){
			if(n % i == 0){
				int t = n / i;
				if(t <= 9 && t >= 1){
					ok = 1; break;
				}
			}
		}
		printf("%s\n", ok ? "Yes" : "No");
	}
}