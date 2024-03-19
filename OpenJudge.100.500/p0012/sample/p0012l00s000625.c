#include <stdio.h>
int main(){
	int data[10]={};
	int n, i=0;
	while(scanf("%d", &n) != EOF){
		if(n!=0){
			data[i] = n;
			i++;
		} else {
			i--;
			printf("%d\n", data[i]);
			data[i] = 0;
		}
	}
	return 0;
}