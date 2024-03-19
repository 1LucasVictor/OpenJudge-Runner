#include<stdio.h>

void count(int a[],int size,int n,int id);

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N-1];
    for(int i=0;i<N-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    int id = 0;
    for(int i=1;i<=N;i++,id++)
    {
        count(arr,N-1,i,id);
    }
}

void count(int a[],int size,int n,int id)
{
    int count = 0;
    for(int i=id;i<size;i++)
    {
        if(a[i]==n)
        {
            count++;
        }
    }
    printf("%d\n",count);
}
