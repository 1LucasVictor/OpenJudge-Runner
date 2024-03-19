#include<stdio.h>

int main(){
  unsigned int  h,n,a[1000];
  unsigned int  cnt=0;
  scanf("%d%d",&h,&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  for(int i=0;i<n;i++){
    cnt+=a[i];
    if(cnt>=h){
      printf("Yes");
      return 0;
    }
  }
  printf("No");
  return 0;
  
}
