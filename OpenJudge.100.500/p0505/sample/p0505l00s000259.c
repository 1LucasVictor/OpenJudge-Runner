#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n;
    long long h;
    scanf("%lld %d",&h,&n);
    int a[n];
    int add=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        add+=a[i];
    }
    if(add<h)printf("No");
    else printf("Yes");
}

