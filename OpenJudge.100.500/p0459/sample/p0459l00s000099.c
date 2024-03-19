#include <stdio.h>
int main()
{
    int a,b,c,d,e,n,m=0;
    scanf("%d%d",&a,&b);
    if(b%2==0&&a*4>=b){
    if(b/4==a){
        printf("Yes\n");
    }
    else if((b-2)/4==(a-1)){
        printf("Yes\n");
    }
    else if((b-4)/2==(a-1)){
        printf("Yes\n");
    }
    else if(b/2==a){
        printf("Yes\n");
    }
    else if(b%a==4){
        printf("Yes\n");
    }
    else if(b<=a*4){
        printf("Yes\n");
    }

    else {
        printf("No\n");
    }}
    else{
        printf("No\n");
    }

    return 0;
}