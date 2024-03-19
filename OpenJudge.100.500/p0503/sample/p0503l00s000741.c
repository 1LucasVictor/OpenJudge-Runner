#include<stdio.h>
#include<stdlib.h>
 
  void merge(long int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    long int L[n1],R[n2] ;
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
void mergeSort(long int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2; 
  
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
  int main()
  {
    int n,i;
    long int *a;
    scanf("%d",&n);
    
    
    a=(long int*)malloc(n*sizeof(long int));
    
    for(i=0;i<n;i++)
       scanf("%ld",&a[i]);
    
    mergeSort(a,0,n-1);
    
    for(i=0;i<n-1;i++)
    {
      if(a[i]==a[i+1])
         {
           printf("NO");
           break;
         }
    }
    if(i==n-1)     
    printf("YES");   
  }