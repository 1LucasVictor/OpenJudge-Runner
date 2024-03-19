#include<stdio.h>

int main(){
  char a[1000000];
  int i,ichi=0,zero=0;
  for(i=0;;i++){
    scanf("%c",&a[i]);
    if(a[i]=='1'){
      ichi++;
    }else if(a[i]=='0'){
      zero++;
    }else{
      break;
    }
  }
  if(ichi<zero){
    printf("%d",ichi*2);
  }else{
    printf("%d",zero*2);
  }
  return 0;
}
