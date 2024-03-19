#include<stdio.h>
int A[50];
int F(int);
int F(int x){
  if(x==1||x==0){
    return A[x]=1;
  }else if(A[x]!=0){
   return A[x];
  }
  return A[x] = F(x-1)+F(x-2);
  
}
int main(){
  int a,b;
  scanf("%d",&a);
  b=F(a);
  printf("%d\n",b);
  return 0;

}

