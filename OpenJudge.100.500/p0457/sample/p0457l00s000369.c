#include <stdio.h>

int main(){
  int n,m,k;
  int i,j;
  int a_i=0,b_i=0;
  int sum;
  int book_count=0;
  scanf("%d %d %d",&n,&m,&k);
  int A[k+1],B[k+1];
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
  }
  for(i=0;i<m;i++){
    scanf("%d",&B[i]);
  }
if(A[0]<k ||B[0]<k){
  while(1){
    if(A[a_i] < B[b_i]){
      if(sum+A[a_i] <= k){
        sum+=A[a_i];
        //printf("%d\n",sum);
        a_i++;
        book_count++;
        if(sum==k){
          break;
        }
      }else{
        break;
      }
    }else if(A[a_i] > B[b_i]){
      if(sum+B[b_i] <= k){
        sum+=B[b_i];
        //printf("%d\n",sum);
        b_i++;
        book_count++;
        if(sum==k){
          break;
        }
      }else{
        break;
      }
    }
  }
}

  printf("%d",book_count);

  /*
  for(i=0;i<n;i++){
  printf("%d",A[i]);
}
printf("\n");
for(i=0;i<m;i++){
printf("%d",B[i]);
}
printf("\n");
*/
return 0;
}
