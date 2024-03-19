#include<stdio.h>
typedef long long ll;
typedef long l;
int return_max(int a,int b){
  if(a>b){
    return a;
  }else{
    return b;
  }
}

int return_min(int a,int b){
  if(a<b){
    return a;
  }else{
    return b;
  }
}

int main(void)
{
  int a;
  scanf("%d",&a);
  printf("%d\n",a+a*a+a*a*a);
  return 0;
}
