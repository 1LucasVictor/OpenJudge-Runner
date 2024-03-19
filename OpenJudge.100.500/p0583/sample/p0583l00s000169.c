#include<stdio.h>
int main(){
  int n,a,b,c,d,i,r=1,p[200010]={};
  char s[200010];
  scanf("%d %d %d %d %d %s",&n,&a,&b,&c,&d,s+1);
  for(i=1;s[i];i++){
    if(s[i]=='#')continue;
    if(p[i]==0)p[i]=r++;
    if(s[i+1]-'#')p[i+1]=p[i];
    if(s[i+2]-'#')p[i+2]=p[i];
  }
  if(c<d){
    if(p[a]==p[c]&&p[b]==p[d])printf("Yes\n");
    else printf("No\n");
  }
  else{
    if(p[a]==p[c]&&p[b]==p[d]){
      for(i=b;i<d;i++){
	if(s[i-1]=='.'&&s[i]=='.'&&s[i+1]=='.')break;
      }
      printf("%s\n",i==d?"No":"Yes");
    }
    else printf("No\n");
  }
  return 0;
}
