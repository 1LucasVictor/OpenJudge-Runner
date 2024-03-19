#include<stdio.h>
int main(){
  int a,b,c,d,i;
  scanf("%d",&a);
  for(i=0;i<a;i++){
    scanf("%d%d%d",&b,&c,&d);
    b*=b;
    c*=c;
    d*=d;
    if(b==c+d){
      printf("YES\n");
    }
    else if(c==b+d){
      printf("YES\n");
    }
    else if(d==b+c){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}