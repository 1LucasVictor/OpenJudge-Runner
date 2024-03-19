#include<stdio.h>
int main()
{
    int a,b,c,temp;
    
    scanf("%d %d %d",&a,&b,&c);
    if(b < a){
        temp = a;
        a = b;
        b = temp;
    }
    if(c < b){
        temp = b;
        b = c;
        c = temp;
    }
    if(b < a){
        temp = a;
        a = b;
        b = temp;
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}
