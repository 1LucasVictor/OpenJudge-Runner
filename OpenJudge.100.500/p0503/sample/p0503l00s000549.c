#include<stdio.h>

void merge_sort(int array[],int left,int right){
  int i,j,k,mid;
  int work[200000];
  
  if(left < right){
    mid = (left + right)/2;
    merge_sort(array,left,mid);
    merge_sort(array,mid+1,right);
    for(i=mid; i>= left;i--){work[i] = array[i];}
    for(j=mid+1; j<=right; j++){
      work[right-(j-(mid+1))] = array[j];
    }
    i = left;
    j = right;
    for(k=left; k<=right; k++){
      if(work[i] < work[j]){array[k] = work[i++];}
      else{array[k] = work[j--];}
    }
  }
}

int main(void){
  int array[200000];
  int a,n,i;
  a = 0;
  
  scanf("%d",&n);
  
  for(i=0; i<n; i++){
    scanf("%d",&array[i]);
  }
  
  merge_sort(array,0,n-1);
  
  for(i=0;i<n-1;i++){
    if(array[i] == array[i+1]){
      printf("NO");
      a = 1;
      break;
    }
  }
  
  if(a == 0)
  	printf("YES");
  return 0;
}