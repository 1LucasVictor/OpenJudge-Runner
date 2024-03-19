#include<stdio.h>

int main(){
  int a=0;
  int b=0;
  int c=0;
  int d=0;

  scanf("%d",&a);
  b = a/100;
  c = (a-b*100)/10;
  d = a-b*100-c*10;
   
  if(b==7||c==7||d==7){
    printf("Yes");
  }
  else printf("No");
}
