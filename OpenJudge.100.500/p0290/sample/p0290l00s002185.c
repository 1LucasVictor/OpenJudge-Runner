#include<stdio.h>
#include<math.h>

int is_prime(int);

int main(){
  int i,j;
  int a[10000];
  int con=0;
  scanf("%d",&i);
  for(j=0;j<i;j++){
    scanf("%d",&a[j]);
  }
  for(j=0;j<i;j++){
    if(is_prime(a[j])==1){
      con+=1;
    }
  }
  printf("%d\n",con);
  return 0;
}

int is_prime(int num){
  int i;
  if(num<2)return 0;
  else if(num==2)return 1;
  else if(num%2==0)return 0;

  else{
    for(i=3;i<=sqrt(num);i+=2){
    if(num%i==0){
      return 0;
    }
  }
  }
  return 1;
}

