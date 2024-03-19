#include<stdio.h>

int main(){
	int n;
	int i;
	double debt = 100000;
	
	scanf("%d", &n);
	
	for( i = 0; i < n; i++){
		debt *= 1.05;
		if((int)debt % 1000 != 0){
			debt = debt - ((int)debt % 1000) + 1000;
		}
	}
	
	printf("%.0f\n", debt);
	
    return 0;
}
