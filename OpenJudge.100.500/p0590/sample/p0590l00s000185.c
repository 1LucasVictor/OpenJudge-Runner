#include <stdio.h>
int main(){
  int a[5],dis,flag=0;
  for (int i=0;i<5;i++) scanf("%d",&a[i]);
  scanf("%d",&dis);
  for (int i=0;i<4;i++){
    for (int j=i+1;j<5;j++){
      if (a[j]-a[i]<=dis) flag++;
    }
  }
  if (flag==10) printf("Yay!\n");
  else printf(":(\n");
  return 0;
}
