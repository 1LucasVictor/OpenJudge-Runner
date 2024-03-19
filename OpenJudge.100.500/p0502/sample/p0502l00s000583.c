#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    int f[a];
    for(b=0;b<a;b++)
        scanf("%d",&f[b]);
    for(b=0;b<a;b++)
    {
        if(f[b]%2==0)
        if(f[b]%3!=0&&f[b]%5!=0) {printf("DENIED"); c=1; break;}
    }
    if(c==0) printf("APPROVED");
    return 0;
}