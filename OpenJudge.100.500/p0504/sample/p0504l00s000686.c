#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.141592653589793
#define MOD 1000000007


int main(){
	int h, a;
	scanf("%d%d", &h, &a);
	int count =0;
	while(h>0){
		h = h-a;
		count++;
	}
	printf("%d\n", count);

	return 0;
}