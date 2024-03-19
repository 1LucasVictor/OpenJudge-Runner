#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(c>b){
        if(b>a)
        printf("Yes\n");
        else
         printf("No\n");}
    else if(c<b){
       if(a>b)
          printf("No\n");
    else if(a>c)
          printf("No\n");
    }
    return 0;
}

