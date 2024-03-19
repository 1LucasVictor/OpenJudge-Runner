#include<stdio.h> 
int main(){
  int i=0;
  char a[1200];
  
  while(1){
    scanf("%c",&a[i]);
    if(a[i]=='.') break;
    i++;
  }
  i=0;
  
  while(1){
    if(a[i]>=65 && a[i]<=90){
      a[i]+=32;
    }
    else if(a[i]>=97 && a[i]<=122) {
      a[i]-=32;
    }
    if(a[i]=='.') break;
    i++;
  }
  
  i=0;
  
  while(1){
    printf("%c",a[i]);
    if(a[i]=='.'){
      printf("\n");
      break;
    }
    i++;

  }

  return 0;
}