#include <stdio.h>

int main() {
    int n;
    int A[100];
    scanf("%d", &n);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int h;
    for(h=0;h<n;h++){
        printf("%d ",A[h]);
    }
    
    printf("\n");
    int k;
    for(k=1;k<n;k++){
        int v=A[k];
        int j=k-1;
        while(j>=0&&A[j]>v){
            
            A[j+1]=A[j];
            j--;
            A[j+1]=v;
        }
        int m;
        for(m=0;m<n-1;m++){
            printf("%d ",A[m]);
           
        }
        printf("%d",A[n-1]);
        printf("\n");
        
    }
    return 0;

    

}