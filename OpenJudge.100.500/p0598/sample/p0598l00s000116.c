#include <stdio.h>
int main(void){
int A;
int B;
scanf("%d %d",&A,&B);
if(B%A==0){
    printf("%d",A+B);
}
else if(!0<=A<=B<=20){
    printf("");
}
else{
    printf("%d",B-A);
}
  
   }
