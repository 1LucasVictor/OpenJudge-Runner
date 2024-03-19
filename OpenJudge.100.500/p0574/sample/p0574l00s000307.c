#include<stdio.h>

int main() {
  	int n=0;
  	char c[4];
    scanf("%s",c);
  	for(int i=0; i<3; i++) {
    	if(c[i] == c[i+1]) {
          n++;
        }  
    }
  	if(n=0) 
    	printf("Good");
  	else
      printf("Bad");
}