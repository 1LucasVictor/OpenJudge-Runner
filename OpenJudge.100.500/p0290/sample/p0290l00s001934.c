#include<stdio.h>
#include<math.h>

int sosu(int);

int main(){
  int A[10000],h,i,cnt=0,result;

  scanf("%d",&h);
  
  for(i = 0 ; i < h ; i++){
    scanf("%d",&A[i]);
    result = sosu(A[i]);
    if(result == 1) cnt++;
  }

  printf("%d\n",cnt);

  return 0;
}

int sosu(int x){
  int i,result = 1;
  double A = sqrt(x);

  for(i = 2 ; i <= A ; i++){
    if(x % i == 0){
      result = 0;
      break;
    }
  }
  return result;
}

