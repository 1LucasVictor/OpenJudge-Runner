#include<stdio.h>
int main(void){
  int a[3],i,len=0,str=0;
  for(i=0;i<3;i++){
  scanf("%d",&a[i]);
  }
  
  for(i=0;i<3;i++){
    if(a[i]==5){
      len++;
    }
    else if(a[i]==7){
      str++;
    }
    else {
      printf("NO");
      return 0;
    }
  }
    if(str==1&&len==2) printf("YES");
    return 0;
}
