#include<stdio.h>
int main(){
  int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  if(a+b+c==17){
    if(a==5|a==7){
      if(b==5|b==7){
        if(c==5|c==7){
          printf("YES\n");
        }else{
        printf("No\n");
        }
      }else{
      printf("No\n");
      }
    }else{
      printf("No\n");
    }
  }else{
    printf("No\n");
  }
  return 0;
}