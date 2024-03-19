#include<stdio.h>

int main()
{
       int n,sm,j=0,k,box;
       scanf("%d",&n);
       k = n-1;
       int a[n];
       for(int i=0;i<n;i++){
           scanf("%d ",&sm);
           a[i]=sm;
        }
        while(j<k){
            box = a[j];
            a[j]= a[k];
            a[k]=box;
            j++;
            k--;
        }
        int i=0;
    if(i != n-1){
       printf("%d ",a[i]);
       i++;
       while(i<n-1){
            printf("%d ",a[i]);
            i++;
       }
    }
       printf("%d\n",a[i]);
       return 0;
}
