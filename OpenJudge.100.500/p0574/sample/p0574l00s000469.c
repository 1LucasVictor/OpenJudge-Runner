#include<stdio.h>

int main(){
  char a[4]; scanf("%s",a);
  for(int i=0; i<3; i++){
    if (a[i]==a[i+1]){ printf("Bad\n"); break;}
    else if(i==2) printf("Good\n");
  }
  return 0;
}