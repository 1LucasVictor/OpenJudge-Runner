#include <stdio.h>

int main(){
 int A,B;
 scanf("%d%d",&A,&B);
 
 int i,cnt=1,num=A;
 if(B==1){
   printf("0\n");
 }
 else{
 while(num<B){
   num += A-1;
   cnt++;
 }
 printf("%d\n",cnt);
 }
 return 0; 
}