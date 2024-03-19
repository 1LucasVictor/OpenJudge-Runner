#include<stdio.h>
#include<string.h>
int main()
{
   int a[3],c=0,d=0,i;
    for(i=0;i<3;i++){
       scanf("%d",&a[i]);
        if(a[i]==5)
        c++;
        else if(a[i]==7)
        d++;
    }
    if(c==2 && d==1)
    printf("YES\n");
    else printf("NO\n");
    return 0;
}