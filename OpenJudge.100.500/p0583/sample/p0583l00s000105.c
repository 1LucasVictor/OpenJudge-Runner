#include <stdio.h>

int main(void){
  int n ,a,b,c,d,j=0,k1=0,k2=0;
  char s[200005];
  scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
  scanf("%s",s);
  for(int i=0;i<n;i++){
    if(c>d){
      if((s[i]=='.')&&(s[i+1]=='.')&&(s[i+2]=='.')&&(i<n-2)&&(i<d)&&(i<n-2)&&(i>=b-2)) k1=1;
      if((s[i]=='#')&&(s[i+1]=='#'&&(i<c)&&(i<n-1))) k2=1;
    }else{
      if((s[i]=='#')&&(s[i+1]=='#'&&(i<d)&&(i<n-1))) j=1;
    }
  }
  if(c>d){
    if(k1==0||k2==1) printf("No");
    if(k1==1&&k2==0) printf("Yes");
  }else{
    if(j==1) printf("No");
    if(j==0) printf("Yes");
  }
  return 0;
}