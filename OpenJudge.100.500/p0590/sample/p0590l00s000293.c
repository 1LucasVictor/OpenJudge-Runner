#include <stdio.h>

int main(void) {

	int a;
	int b;
    int c;
    int d;
    int e;
    int k;

	scanf("%d", &a);
	scanf("%d", &b);    
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &k);
  
    int f =  e-a;
    
    if(f <= k){
      puts("Yay!");
    }
    else{
      puts(":(");
    }
	return 0;
}

