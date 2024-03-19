#include<stdio.h>
int main()
{
    int arr[100],x,i,n,j;
    scanf("%d",&n);
    n<=100;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
    for(i=0;i<n/2;i++){
          x=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=x;
    }
    for(i=0;i<n;i++){
    printf("%d",arr[i]);
    if(arr[i]!=1){
    printf(" ");}}
printf("\n");
    return 0;
}

