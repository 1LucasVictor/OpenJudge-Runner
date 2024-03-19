#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
            if(b%2==0 && b>=a*2 && b<=a*4){
            printf("Yes\n");
          }
        else{
            printf("No\n");
        }
    return 0;
} 