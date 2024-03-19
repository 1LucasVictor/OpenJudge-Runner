#include<stdio.h>
int main()
{
  int a,b,c,temp;
  scanf("%d %d %d",&a,&b,&c);
//    printf("%d %d %d\n",a,b,c);
  if(a>b){
    temp=a;
    a=b;
    b=temp;
  };
//    printf("%d %d %d\n",a,b,c);
  if(b>c){
    temp=b;
    b=c;
    c=temp;
  };  
//    printf("%d %d %d\n",a,b,c);
  if(a>b){
    temp=a;
    a=b;
    b=temp;
  };
//  printf("%d %d %d\n",a,b,c);
  if(a==5 && b==5 && c==7){
    printf("YES");
  } else {
    printf("NO");
  };
}