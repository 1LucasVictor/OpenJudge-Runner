#include<stdio.h>
#include<math.h>

int Prime_check(int x){
 int i;

 if(x==2)return 1;

 for(i=2;i<=sqrt(x);i++)
  if(x%i == 0)return 0;

return 1;
}

int main(){
 int n,i;
 int x;
 int cnt=0;

 scanf("%d",&n);
 for(i=0;i<n;i++){
  scanf("%d",&x);
  if(Prime_check(x))cnt++;
 }

 printf("%d\n",cnt);

return 0;
}
