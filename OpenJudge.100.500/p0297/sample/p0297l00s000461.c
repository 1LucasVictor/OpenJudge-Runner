#include <stdio.h>
#define O 100000
#define M 10

int main(){

  int n ,q ,t[O] ,i ,at=0 ,ht ,s=0;
  char name[O][M];
 
  scanf("%d%d",&n,&q);
 
  for(i=0;i<n;i++){
    scanf("%s %d",&name[i],&t[i]);
  }
  
  ht=t[0];
  for(i=1;i<n;i++){
    if(ht<t[i]){
      ht=t[i];
      s=i;
    }
  }

  i=0;
  while(t[s]!=0){
    
    if(t[i]==0){
      i++;
      if(i==n) i=i-n;
    }    
    else if(t[i]>q){
      at+=q;
      t[i]=t[i]-q;
      i++;
      if(i==n) i=i-n;
    }
    else if(t[i]<=q){
      at+=t[i];
      t[i]=0;
      printf("%s %d\n",name[i] ,at);
      i++;
      if(i==n) i=i-n;
    }
  }
  
  return 0;
}

