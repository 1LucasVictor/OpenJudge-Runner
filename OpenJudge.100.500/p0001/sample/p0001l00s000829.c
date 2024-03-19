#include <stdio.h>


int ket(int data){
  int result;
  result = 0;
  while(data != 0){
    data = data / 10;
    result++;
  }
  return(result);
}
int main(void){
  int num1,num2;
  int sum[3];
  int i;
  for(i=0;i<3;i++){
    scanf("%d%d",&num1,&num2);
    sum[i] = num1 + num2;
  }

  int keta[3];

  for(i=0;i<3;i++){
    keta[i] = ket(sum[i]);
    printf("%d\n",keta[i]);
  }


  return(0);

}