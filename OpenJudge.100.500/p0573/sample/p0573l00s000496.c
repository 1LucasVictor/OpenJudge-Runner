#include<stdio.h>

int main(void){
  char a[4];
  
  scanf("%s",a);
  int i,j;
  int k,l;
  k=0;
  l=0;
  if(a[0]==a[1]){
  	if(a[1]!=a[2]){
        if(a[2]==a[3]){
          printf("Yes");
          k+=1;
        }
    }
  }
  if(a[0]==a[3]){
    if(a[0]!=a[1]){
      if(a[1]==a[2]){
        printf("Yes");
          k+=1;
      }
    }
  }
  if(a[0]==a[2]){
      if(a[0]!=a[1]){
        if(a[1]==a[3]){
          printf("Yes");
            k+=1;
        }
      }
    }
  if(k==0){
            printf("No");
  }
  return 0;
}