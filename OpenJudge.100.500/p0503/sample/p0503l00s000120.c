#include <stdio.h>
#include <stdlib.h>

int compare(const void* a,const void* b);

int main(void)
{
    int n=0,flag=1;
    long int array[200000]={};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%ld",&array[i]);
    }
    qsort(array,n,sizeof(long int),compare);
    for(int i=0;i<n-1;i++){
        if(array[i]==array[i+1]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

int compare(const void* a,const void* b){
    long *A=(long*)a;
    long *B=(long*)b;
    if(*A-*B<0) return -1;
    if(*A-*B>0) return 1;
    return 0;
}
