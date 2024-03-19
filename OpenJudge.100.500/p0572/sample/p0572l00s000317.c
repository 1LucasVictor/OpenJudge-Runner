#include <stdio.h>
#include <math.h>
int main(void){
    // Your code here!
    int r,l;
    int a,b;
    scanf("%d %d ",&l,&r);
   if(r%673==r-l && r-l >3){
       printf("0\n");
   }
   else{
       printf("%d\n",(l)%2019*(l+1)%2019);
   }
    return(0);
}
