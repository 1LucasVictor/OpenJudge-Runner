#include<stdio.h>
int main()
{
    int a,b,t,ret;
    scanf("%d %d %d",&a,&b,&t);
    if( a < 1 || a > 20 ||
        b < 1 || b > 20 || 
        t < 1 || t > 20) return 0;
    ret= 0;
    while(1){
      t = t - a;
      if(t < 0) break;
      ret = ret + b;
      
    }
  
    // 出力
    printf("%d \n",ret);
    return 0;
}