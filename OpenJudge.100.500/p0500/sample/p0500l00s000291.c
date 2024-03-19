#include<stdio.h>
#include<math.h>
#include<string.h>
int main(void){
int N,M,s[4],c[4],ans[4]={};
  scanf("%d %d",&N,&M);
  for(int i=0;i<M;i++){
   scanf("%d %d",&s[i],&c[i]);
    if(s[i]==1&&c[i]==0&&N>1){
      printf("-1");
      return 0;
    }
  }
  
  int max=-1;
  for(int i=0;i<M;i++){
    if(s[i]>max)max=s[i];
  }
    
   for(int i=0;i<M-1;i++){
     if(max>N){printf("-1");
               return 0;
              }
   }
  
 for(int i=0;i<M-1;i++){
   if(s[i]==s[i+1]&&c[i]!=c[i+1]){
     printf("-1");
  return 0;
}
 }
 
    
  
  int cc=0;
  for(int i=0;i<M;i++){
    cc+=c[i];
  }
  if(N==1&&cc==0){
    printf("0");
    return 0;
  }
  
  for(int i=0;i<M;i++){
ans[s[i]-1]=c[i];
  }
// printf("%d\n",strlen(ans));
  
  //int count=0;
  for(int i=0;i<M;i++){
    //if(count==0&&ans[i]==0){continue;}
   // else {count++;
         printf("%d",ans[i]);
         
  }
  
 
  
  return 0;
}