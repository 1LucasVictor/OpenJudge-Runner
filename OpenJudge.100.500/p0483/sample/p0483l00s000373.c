#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main(void){
	int n;
	int i;
	scanf("%d",&n);
	for(i=0;i<3;i++){
		if(n%10 == 7){
			printf("Yes");
			return 0;
		}
		else{
			n = n/10;
		}
		
	}
	printf("No");
    return 0; 
}
