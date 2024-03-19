#include<stdio.h>

int main()
{
    int a,b,c,d,sum;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF){
       sum=0;
       if(b>c&&b<d){
          sum=b-c;
       }else if(b>c&&b>d){
          sum=d-c;
       }else if(b<c){
          sum=0;
       }
      printf("%d\n",sum);
    }
    return 0;
}