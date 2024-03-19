#include <stdio.h>
#define LENGTH 10

int main(void){

    char input[LENGTH];
    int num, train, taxi;

    if(scanf("%d%d%d",&num,&train,&taxi) < 2);
    

    printf("%d", (num * train > num * taxi) ? num * taxi : num * train); 
  
 

   return 0;
}