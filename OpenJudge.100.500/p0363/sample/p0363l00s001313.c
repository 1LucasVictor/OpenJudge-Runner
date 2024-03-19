#include <stdio.h>
int main(void)
{
  int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

//a<b<c
  if(a<b && b<c && a<c){
      printf("%d %d %d\n",a,b,c);
//b<a<c
  }else if(b<a && a<c && b<c){
      printf("%d %d %d\n",b,a,c);
//a<c<b
  }else if(a<c && c<b && a<b){
      printf("%d %d %d\n",a,c,b);
      //b<c<a
  }else if(b<c && c<a && b<a){
      printf("%d %d %d\n",b,c,a);
      //c<a<b
  }else if(c<a && a<b && c<b){
      printf("%d %d %d\n",c,a,b);
      //c<b<a
  }else if(c<b && b<a && c<a){
      printf("%d %d %d\n",c,b,a);
  }

return 0;
}

