#include<stdio.h>

int main()
{
  int n,i,k,a,b,in=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a);
    for(k=2;k<=a;k++){
      if((a%k)==0 && (a/k)!=1){
        break;
      }
      if(k>a/2){
        in++;
        break;
      }
    }
  }
  printf("%d\n",in);
  return 0;
}
