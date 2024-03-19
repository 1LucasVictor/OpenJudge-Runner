#include <stdio.h>

int main(){
	int n, a;
	scanf("%d", &n);
	int Max, Min, Sum;
	scanf("%d", &a);
	Max=a;
	Min=a;
	Sum=a;
	for (int i=1; i<n; i++){
		scanf("%d", &a);
		if(a>Max){
			Max=a;
		}
		if(a<Min){
			Min=a;
		}
		Sum=Sum+a;

	}
	printf("%d %d %d\n", Min, Max, Sum);
	return 0;
}