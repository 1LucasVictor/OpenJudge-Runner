#include <stdio.h>
#include <string.h>

int main(){
 char a[2];
  
 scanf("%s",&a);
    
 if(strcmp(a,"ABC") == 0){
  printf("ARC"); 
 }else{
  if(strcmp(a,"ARC") == 0){
  printf("ABC"); 
  } 
 }
 
}