#include <stdio.h>
#include <math.h>
int main(void){
    // Your code here!
    int r,l;
    int a,b;
    scanf("%d %d ",&l,&r);
   if(r-(r%673)>l && r-(r%3) >l){
       printf("0\n");
   }
   else{
       printf("%d\n",(l)%2019*(l+1)%2019);
   }
    return(0);
}
