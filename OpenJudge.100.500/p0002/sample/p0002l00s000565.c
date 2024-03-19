#include <stdio.h>
#define swap(type,a,b) do{type t=a;a=b;b=t;}while(0)

int isRAT(int a,int b,int c){
  if(a<b)swap(int,a,b);
  if(a<c)swap(int,a,c);
  if(a*a==b*b+c*c)return 1;
  else return 0;
}

int main(void){
  int n,a,b,c;
  scanf("%d",&n);
  for(;n>0;n--){
    scanf("%d %d %d",&a,&b,&c);
    if(isRAT(a,b,c)==1)printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}