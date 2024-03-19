#include<stdio.h>

int countSocket(int a, int i){
	return a + (a-1)*(i-1);
}

int main(void){
	int a,b;
  	scanf("%d %d", &a, &b);
  	
  	int i = 1;
  	int n = countSocket(a, i);
  	while(n < b){
    	i++;
      	n = countSocket(a, i);
    }
  	printf("%d\n", i);
}