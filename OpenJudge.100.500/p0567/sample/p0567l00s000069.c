#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(b+c<a){
        printf("0\n");
    }
    else{
        printf("%d\n",c-abs(a-b));
    }
    return 0;
}
