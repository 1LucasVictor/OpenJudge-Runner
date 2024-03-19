#include <stdio.h>


int main(void)
{
    int i,j;
    int n;
    int a[200001];
    int buka[200001];

    scanf("%d",&n);
    for(i=0;i<n-1;i++){
        scanf("%d",&a[i]);
        buka[a[i]-1]++;
    }

    for(i=0;i<n;i++){
        printf("%d\n",buka[i]);
    }

    return 0;
}