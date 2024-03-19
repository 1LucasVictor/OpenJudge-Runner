#include <stdio.h>

int main(){
	int in, a[4], b=1000, i;
	scanf("%d", &in);
	for(i=0;i<4;i++){
		a[i] = in/b;
		in -= b*a[i];
		b/=10;
	}	
	
	for(i=0;i<3;i++){
		if(a[i] == a[i+1]){
			printf("Bad");
			return 0;
		}	
	}	
	
	printf("Good");
	
	
	return 0;
}
