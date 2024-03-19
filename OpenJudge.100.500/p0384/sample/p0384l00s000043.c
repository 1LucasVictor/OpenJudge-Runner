#include<stdio.h> 
int main(){
  int i=0,j=0;
  char a[1200];
  
  while(1){
    scanf("%c",&a[j]);
      if(a[j]=='\n') break;
      j++;
    }
    for(i=0;i<j;i++){

      if(a[i]>=65 && a[i]<=90){
	a[i]+=32;
      }
      else if(a[i]>=97 && a[i]<=122) {
	a[i]-=32;
      }
    }
  
  
    for(i=0;i<j;i++){
      printf("%c",a[i]);
    }

    printf("\n");


    return 0;
    }
