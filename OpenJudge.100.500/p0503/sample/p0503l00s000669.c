#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[n]);
    }
    for (i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[i]==a[j]) break;
        }
    }
    if (i>=n-1) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}