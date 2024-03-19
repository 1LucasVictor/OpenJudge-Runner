#include <stdio.h>
 
int main(){
  char a[5];
  scanf(" %s", a);
  if(a[0] == a[1] || a[1] == a[2] || a[2] == a[3]){
      puts("Bad");
    } else {
       puts("Good");
    }
  return 0;
  }