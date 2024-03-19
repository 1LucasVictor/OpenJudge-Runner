#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int compare_int(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}
int main(){
   int n,f,s;
  scanf("%d",&n);
  f=n/10;
  s=n%10;
  if(n/100==7||n%10==7||s==7) printf("Yes");
  else printf("No");
  
  return 0;
}