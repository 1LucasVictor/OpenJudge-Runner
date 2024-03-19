#include<stdio.h>
int main(){
int a,b,c,d;
scanf("%d", &a);
  
  b=a%10;
  c=(a-a%10)/10%10;
  d=a/100;
  
  if(b==7||c==7){
    printf("Yes\n");
    return 0;
  }
    
  if(d==7){
    printf("Yes\n");
    return 0;
  }

printf("No\n");
return 0;
}
