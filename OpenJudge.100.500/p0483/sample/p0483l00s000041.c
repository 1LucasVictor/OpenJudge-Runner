#include<stdio.h>
int main(void){
  int a,b=1,i;
  scanf("%d",&a);
  for(i=0;i<1;i++){
    b*=10;
    if(a%b==7){puts("Yes");return 0;}
    else {a=(a-a%b)/10;}
  }
  puts("No");
 return 0; 
}