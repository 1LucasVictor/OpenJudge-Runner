#import "stdio.h"
int main(){
  int n,h,a,i;
  scanf("%d%d",&h,&n);
  for(i=0;i<n;i++){
    scanf("%d",&a);
    h=h-a;
    if(h<=0){
      printf("Yes");
      return 0;
    }
  }
  printf("No");
  return 0;
}
