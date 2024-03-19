#include <stdio.h>
 
int main(){

  int count = 0, countnot = 0;
  char a[5];
  scanf("%s", a);
  for(int i= 0; i < 3; i++){
      if(a[i] == a[i + 1]){
	count++;
      }
  }
  if(count < 0){
    printf("Good\n");
  }	else{
    printf("Bad\n");
  }
  return 0;
}
