#include <stdio.h>

int main(){
	int n, i;
	long debt = 100000;
	
	scanf("%d",&n);

	for(i = 0; i < n; i++){
		debt *= 1.05;
		if(debt % 1000 != 0){
			debt -= (debt % 1000);
			debt += 1000;
		}

	}

	printf("%ld\n",debt);

	return 0;
}