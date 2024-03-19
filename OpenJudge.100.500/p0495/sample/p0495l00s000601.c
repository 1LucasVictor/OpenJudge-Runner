
#include <stdio.h>

int main(){
    
int condition;
char str[3];
scanf("%s", str);
    
    if(str[0]==str[1] && str[0]!=str[2]){
      condition = 0;     
    }
    
    else if(str[1]==str[2] && str[1]!=str[0]){
      condition = 0;     
    }    
    
    else if(str[0]==str[2] && str[0]!=str[1]){
      condition = 0;     
    } else {
        condition = 1;
    }
if (condition == 0){
   printf("Yes\n"); 
} else {
   printf("No\n");    
}    
    return 0;
}
