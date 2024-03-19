#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  int n,m;
  scanf("%d%d",&n,&m);

  int ans=-1;
  int ok=1;
  int a[4];
  for(int i=0;i<4;i++) a[i]=-1;
  int s,c;
  //矛盾ないかチェック
  for(int i=0;i<m;i++){
    scanf("%d%d",&s,&c);
    if(a[s-1]>-1 && a[s-1]!=c) ok=0;
    //printf("%d\n",a[i]);
    a[s-1]=c;}
  //先頭の桁
  if(n>1 && a[0]==0) ok=0;
  if(ok){
    if(n==1 && a[0]==-1){
      ans=0;
      printf("%d\n",ans);
      return 0;}
    ans=0;
    for(int i=0;i<n;i++){
      ans*=10;
      if(a[i]==-1){
	if(i==0) ans+=1;}
      else{
	ans+=a[i];}}
  }
  else ans=-1;
  printf("%d\n",ans);

  return 0;
  
}
