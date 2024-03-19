#include<stdio.h>
int main()
{
    int a,b,k,i,p=0;
    scanf("%d %d %d",&k,&a,&b);
    for(i=a;i<=b;i++){
   if(i%k==0){
    printf("OK\n");
    p++;
    break;
    }
    }
    if(p==0){
        printf("NG\n");
    }



   return 0;

}
