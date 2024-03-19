#include<stdio.h>
int main(){
  int a,b=0,n,mini;
  int i,c,s;
  scanf("%d",&n);
  scanf("%d%d",&a,&b);
  s=b-a;
  if(a<b)mini=a;
  else if(b<a)mini=b;
  for(i=2;i<n;i++){
    scanf("%d",&a);
    if(a<mini)mini=a;
    if((a-mini)>s){
      s=a-mini;
    }
  }    
printf("%d\n",s);
return 0;
}

