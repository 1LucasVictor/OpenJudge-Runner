#include <stdio.h>
int main(){
  int n, m;
  int i, j;
  char newline;
  int arr_m[100][100];
  int arr_v[100];
  int arr_result[100];
  int input_m, input_v;

  //input matrix information
  scanf("%d %d", &n, &m);
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      scanf("%d", &input_m);
      arr_m[i][j]=input_m;
    }
  }

  //input vector information
  for(j=0; j<m; j++){
    scanf("%d", &input_v);
    arr_v[j]=input_v;
  }

  //output calculation
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      arr_result[i]+=(arr_m[i][j]*arr_v[j]);
    }
    printf("%d\n", arr_result[i]);
  }
  return 0;
}

