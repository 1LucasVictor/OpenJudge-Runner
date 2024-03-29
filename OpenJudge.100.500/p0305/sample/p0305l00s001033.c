   #include <stdio.h>
    #define MAX 500001
    #define INFTY 100000000
    int A[MAX],L[MAX],R[MAX];
    int c=0;


    
    void merge(int A[], int left, int mid, int right){
    
      int n1,n2,i,j,k;
    
    n1 = mid - left;
    
    n2 = right - mid;
    
    for(i=0;i<n1;i++){
      L[i]=A[left+i];
     }
    for(i=0;i<n2;i++){
      R[i]=A[mid+i];
     }

      L[n1]=INFTY;
      R[n2]=INFTY;
       i=0;
      j=0;

    for(k=left;k<right;k++){
      c++;
      if(L[i]<=R[j]){
        A[k]=L[i];
        i=i+1;
      }
      else{
                A[k]=R[j];
            j=j+1;
         }
        }
        }
    
    void mergesort(int A[],int left,int right){
      int mid;
      if(left+1<right){
        mid = (left + right)/2;
           mergesort(A,left,mid);
        mergesort(A,mid,right);
        merge(A,left, mid, right);
          }
    }

    int main(){
      int i,n;
      scanf("%d",&n);
      for(i=0;i<n;i++){
        scanf("%d",&A[i]);
      }
    
      mergesort(A,0,n);
    
      for(i=0;i<n;i++){
        printf("%d",A[i]);
        if(i<n-1){
          printf(" ");
    }
}
printf("\n%d\n",c);
      
return 0;

    }

