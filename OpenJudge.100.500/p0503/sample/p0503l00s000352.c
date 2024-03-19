#include<stdio.h>
#include<stdlib.h>

void merge_sort (int array[], int left, int right) {
  int i, j, k, mid;
  int work[10];  
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
  int A[200000];
  int i;
  int N,flag=0;
  
  scanf("%d",&N);
  for(i=0;i<N-1;i++){
    scanf("%d ",&A[i]);
  }
  scanf("%d",&A[N-1]);
  
  merge_sort(A,0,N);

  for(i=0;i<N-1;i++){
    if(A[i] == A[i+1]){
      flag++;
      break;
    }
  }
  if(flag) printf("NO");
  else printf("YES");
  return 0;
}