#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int a[n];
  scanf("%d",&a[0]);
  for(int i=1;i<n;i++){
    scanf("%d",&a[i]);
    for(int o=0;o<i;o++){
      if(a[i]==a[o]){
        printf("NO");
      }
    }
  }
  printf("YES");
}