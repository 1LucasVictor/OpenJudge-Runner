#include<stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
    scanf("%d%d%d",&a,&b,&c);
    if(a*a==b*b+c*c | b*b==a*a+c*c | c*c==a*a+b*b){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    }
    return 0;
}

