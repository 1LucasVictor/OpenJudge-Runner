#include<stdio.h>
#include<math.h>
int main(void){
int N,M,s[4],c[4],ans[4]={};
  scanf("%d %d",&N,&M);
  for(int i=0;i<M;i++){
   scanf("%d %d",&s[i],&c[i]);
    if(s[i]==1&&c[i]==0&&N!=0){
      printf("-1");
      return 0;
    }
  }
 for(int i=0;i<M-1;i++){
   if(s[i]==s[i+1]&&c[i]!=c[i+1]){
     printf("-1");
  return 0;
}
 }
  for(int i=0;i<M;i++){
ans[s[i]-1]=c[i];
  }
  int count=0;
  for(int i=0;i<M;i++){
    if(count==0&&ans[i]==0){continue;}
    else {count++;
         printf("%d",ans[i]);
         }
  }
  
 
  
  return 0;
}
