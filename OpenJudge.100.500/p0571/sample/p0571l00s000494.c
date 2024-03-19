#include<stdio.h>
int main() {
        int n,a,b;
        scanf("%d %d %d",&n,&a,&b);
        if (n*a<n*b)
            printf("%d\n",n*a);
        else if (n*b<n*a)
            printf("%d\n",n*b);
        else if (n*a==n*b)
            printf("%d\n",n*a);
        return 0;
}