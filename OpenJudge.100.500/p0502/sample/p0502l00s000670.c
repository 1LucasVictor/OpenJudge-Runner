#include <stdio.h>

int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    b=0;c=0;
    for(i=1;i<=n;i++) {
        scanf("%d",&a);
        if(a%2==0) { b++;
        if(a%6==0 || a%10==0) { c++; }
        }
    }
    if(b==c) { printf("APPROVED\n"); }
    else { printf("DENIED\n"); }

    return 0;
}
