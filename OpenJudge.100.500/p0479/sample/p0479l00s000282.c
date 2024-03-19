#include<stdio.h>
int main()
{   int num;
    int n,i;
    scanf("%d",&n);
    int arr[200010]={0};
    for(i=2; i<=n; i++)
    {scanf("%d",&num);
    arr[num]++;}

    for(i=1; i<=n; i++)

        printf("%d\n",arr[i]);

}
