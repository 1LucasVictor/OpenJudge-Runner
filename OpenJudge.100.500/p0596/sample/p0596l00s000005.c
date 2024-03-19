#include<stdio.h>
#include<string.h>

int main(){
  int i,j,k;
  int t=0,ans=0;
  char S[1000000];
  scanf("%s",S);
  k=strlen(S);
  while(1){
    t=0;
  for(i=0;i<k-1;i++){
    if(S[i] != S[i+1]){
      for(j=i+2;j<k;j++){
        S[j-2]=S[j];
      }
      k-=2;
      t=1;
      ans+=2;
      if(i>=2)
      i-=2;
    }
  }
   if(t==0){
     printf("%d\n",ans);
     return 0;
   }
  }
}
      
    