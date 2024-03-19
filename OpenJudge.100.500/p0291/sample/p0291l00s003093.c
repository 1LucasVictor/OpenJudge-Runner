#include <stdio.h>
int main(){
  int num,max,i,j;
  scanf("%d",&num);
  int a[num];
  for(i = 0 ;i<num ; i++){
    scanf("%d",&a[i]);
  }
  max = a[num-1] -a[0];
  for(i = num-1 ;i>0 ;i--){
    for(j = 0;j<=i-1 ;j++){
      if(a[i]==a[j]){}
     else if(a[i]-a[j]>max) max=a[i]-a[j];
    }
  }
  printf("%d\n",max);
  return 0;
}
    

