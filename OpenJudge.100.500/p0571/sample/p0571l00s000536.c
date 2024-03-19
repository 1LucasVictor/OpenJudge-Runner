#include<stdio.h>
int main()
{
    int a,b,c,z;
    scanf("%d%d%d",&a,&b,&c);
    z=a*b;
    if(z>c){
        printf("%d\n",c);
    }
    else{
        printf("%d\n",z);
    }
    return 0;
}
