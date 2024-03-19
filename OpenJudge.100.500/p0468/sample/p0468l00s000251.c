#include <stdio.h>

int main(){
  char str[100];
  fgets(str,sizeof(str),stdin);
  char abc[10]="ABC";
   int i=0;
  while(str[i]==abc[i]){
    i++;
  }
    if(i==3)
  printf("ARC");
      else
        printf("ABC");
  
}