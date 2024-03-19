#include <stdio.h>

int main(void)
{
        int n,i;
        long h,s;

        scanf("%ld%d",&h,&n);

        int a[n];

        for(i=0;i<n;i++)
                scanf("%d",&a[i]);

        s=0;

        for(i=0;i<n;i++){
                s=s-a[i];
                if(s<=0) {
                        printf("Yes");
                        return 0;
                }
        }

        printf("No");
        return 0;
}
