#include<stdio.h>
int main(void){
    int a,b,i,m;
    while(scanf("%d %d",&a,&b)!=EOF){
     m=a+b;
      for(i=1;m>=10;i++){
        m=m/10;
    }
    printf("%d\n",i);
    }
     return 0;
    }