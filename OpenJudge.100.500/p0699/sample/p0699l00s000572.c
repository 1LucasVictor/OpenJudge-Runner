#include<stdio.h>

int main(void)
{
  int a,b,c;
  
  scanf("%d %d %d",&a,&b,&c);
  
  if(a+b+c==17){
    if(a+b==10 || a+b==12){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }else{
    printf("NO\n");
  }
  
  return 0;
}
