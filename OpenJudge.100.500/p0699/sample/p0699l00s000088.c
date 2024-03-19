#include <stdio.h>

int main(){
  int a[3];
  int cnt_5=0, cnt_7=0;
  scanf("%d %d %d", &a[0], &a[1], &a[2]);
  for(int i=0; i<3; i++){
    if(a[i]==5){
      cnt_5 += 1;
    }
    if(a[i]==7){
      cnt_7 += 1;
    }
  }
  if(cnt_5==2 && cnt_7==1){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
}
