#include<stdio.h>

int main(void)
{
        int i, n, a[100], c1, c2;

        c1=0; c2=0;
        scanf("%d", &n);
        for(i=0; i<n; i++){
                scanf("%d",&a[i]);
                if(a[i]%2==0)
                        c1++;
        }
        for(i=0; i<n; i++)
                if(a[i]%2==0)
                        if(a[i]%3==0||a[i]%5==0)
                                c2++;

        if(c1==c2)
                printf("APPROVED\n");
        else
                printf("DENIED\n");

        return 0;
}
