#include <stdio.h>
#include <stdlib.h>

int inputdata(int num){
	if (scanf("%d", &num) == 1);
  	else { 
  		printf("Failed to read integer.\n"); 
  	}
  	
  	return num;
}

int main(void){
  int a,b,t;
  int sum=0;

  a = inputdata(a);
  b = inputdata(b);
  t = inputdata(t);

  for(;a>20||a<1||b>20||b<1||t>20||t<1;){
  		printf("入力は1~20の範囲でおこなってください．\n"); 
  		a = inputdata(a);
  		b = inputdata(b);
  		t = inputdata(t);
  }

  
  for(int i=0; i < t/a; i++){
    sum += b;
  }
  printf("%d\n", sum);
 
}