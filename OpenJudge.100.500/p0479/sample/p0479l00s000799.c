#include<stdio.h>
int main()
{  int a[200010];
    int arr[200010];
    int n,i;
    scanf("%d",&n);
    for(i=2; i<=n; i++)
    scanf("%d",&a[i]);
    for(i=2; i<=n; i++)
    arr[a[i]]++;

    for(i=1; i<=n; i++)

        printf("%d\n",arr[i]);

}
