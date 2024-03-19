#include <stdio.h>
int a[100] = {0};
int main()
{
    int i, n,flag=0;
    scanf("%d", &n);
    for(i=0 ; i<n ; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++){
        if (a[i]%2==0)
            if (a[i]%3)
                if (a[i]%5)
                    flag=1;
        if(flag!=0)
            break;
    }
    if(flag==0)
        printf("APPROVED");
    else
        printf("DENIED");

    return 0;
}
