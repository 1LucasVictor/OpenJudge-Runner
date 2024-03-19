#include<stdio.h>
int main(){
  int n,m,i,a,b;
  char s[5]={};
  scanf("%d %d",&n,&m);
  while(m--){
    scanf("%d %d",&a,&b);
    if(a==1&&b==0)goto END;
    if(s[a-1]&&s[a-1]-b-'0')goto END;
    s[a-1]=b+'0';
  }
  if(s[0]==0)s[0]='1';
  for(i=1;i<n;i++){
    if(s[i]==0)s[i]='0';
  }
  printf("%s\n",s);
  return 0;
 END:;
  printf("-1\n");
  return 0;
}
