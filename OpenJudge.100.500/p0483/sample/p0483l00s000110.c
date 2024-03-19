#include <stdio.h>
 
int main(void) {

 
    char str[8];
    scanf("%s", str);
  
  if('7'==str[2]){
    printf("Yes");
  }else if('7'==str[1]){
    printf("Yes");
  }else if('7'==str[0]){
     printf("Yes");
  }else{
        printf("No");}
 
 
    return 0;
}