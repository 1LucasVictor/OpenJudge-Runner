#include<stdio.h>

#define MAX_N 200001

void merge_sort (long int array[],long int left,long int right) {
  long int i, j, k, mid;
  long int work[MAX_N];  
  if (left < right) {
    mid = (left + right)/2; 
    merge_sort(array, left, mid);  
    merge_sort(array, mid+1, right);  
    for (i = mid; i >= left; i--) { work[i] = array[i]; } 
    for (j = mid+1; j <= right; j++) {
      work[right-(j-(mid+1))] = array[j]; 
    }
    i = left; j = right;
    for (k = left; k <= right; k++) {
      if (work[i] < work[j]) { array[k] = work[i++]; }
      else                   { array[k] = work[j--]; }
    }
  }
}

int main(void){

    long int N,A[MAX_N],i;

    scanf("%ld",&N);
    for(i = 0;i < N;i++){
        scanf("%ld",&A[i]);
    }

    merge_sort(A,0,N-1);

    for(i = 1;i < N;i++){
        if(A[i] == A[i-1]){
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}