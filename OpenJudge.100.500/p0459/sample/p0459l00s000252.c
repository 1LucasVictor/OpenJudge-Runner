#include<stdio.h>

int main(){
   int a,b,c=0,d=0;
   scanf("%d %d", &a, &b);
   for(int i=0;i<=a;i++){
       if((b-2*i)/4==a-i){
           c++;
       }
   }
   for(int i=0;i<=a;i++){
       if((b-4*i)/2==a-i){
           d++;
       }
   }
    if(c>0&&d>0){
        puts("Yes");
        return 0;
    }
    puts("No");
    return 0;
}