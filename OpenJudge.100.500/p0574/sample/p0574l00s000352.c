#include<stdio.h>
int main(){
  int s,a,b,cnt=0,cnt2=0;
  scanf("%d",&s);
  while(s>0){
    a=s%10;
    if(a==b){
      cnt++;
    }
    s=s/10;
    b=a;
    cnt2++;
  }
  if(cnt==0 && cnt2>=3){
    printf("Good\n");
  }
  else{
    printf("Bad\n");
  }
  return 0;
}
