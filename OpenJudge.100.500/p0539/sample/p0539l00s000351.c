#include <stdio.h>

int main(){
	
int n;
scanf ("%d", &n);

int a[9] = {1,2,3,4,5,6,7,8,9};
int b[9] = {1,2,3,4,5,6,7,8,9};
int check = 0;

for (int i = 0; i < 9; i++){
	for (int j = 0; j < 9; j++){
		
		if (n == a[i] * b[j]){
			check = 1;
			break;
		}
		
		else {
			check = 0;
		}
}
	}
	if (check = 1){
		puts ("Yes");
	}
	else if (check = 0) {
		puts ("No");
	}
	return 0;
}