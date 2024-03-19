#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]){
	int a, b;
  for(int i = 0; i<3; i++){
	if(argv[i] == 'A'){
  		a++;
  	}else if(argv[i] == 'B'){
  		b++;
    }
  }
  if(a != 1 && b != 1)
	printf("Yes");
  else
    printf("No");
}