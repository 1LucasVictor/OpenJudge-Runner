#include<stdio.h>
int main(void){
    int a,b,c,tmp;
    scanf("%d %d %d",&a,&b,&c);
    if(a ==5 && b == 5 && c ==7){
        puts("YES");
    }
    else if (a == 5 && b == 7 && c == 5)
    {
        puts("YES");
    }
    else if (a == 7 && b == 5 && c == 5)
    {
         puts("YES");
    }
    else{
        puts("NO");
    }
    return 0;
    
}