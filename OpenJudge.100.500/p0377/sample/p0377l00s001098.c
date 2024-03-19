#include <stdio.h>

int main(){

  int n,i,num;
  int s[15],h[15],c[15],d[15];
  char moji;

  for(i=1;i<=13;i++){
    s[i]=h[i]=c[i]=d[i]=i;
      }  
  scanf("%d",&n);
  
  for(i=0;i<n+1;i++){
    scanf(" %c %d",&moji,&num);
    
    if(moji=='S') s[num]=0;
    else if(moji=='H')h[num]=0;
    else if(moji=='C')c[num]=0;
    else if(moji=='D')d[num]=0;
  }
  
  for(i=1;i<=13;i++){
    if(s[i]!=0)printf("S %d\n",s[i]);
  }
  for(i=1;i<=13;i++){
    if(h[i]!=0)printf("H %d\n",h[i]);
  }
  for(i=1;i<=13;i++){
    if(c[i]!=0)printf("C %d\n",c[i]);
  }

  for(i=1;i<=13;i++){
    if(d[i]!=0)printf("D %d\n",d[i]);
  }

  

  return 0;
}

