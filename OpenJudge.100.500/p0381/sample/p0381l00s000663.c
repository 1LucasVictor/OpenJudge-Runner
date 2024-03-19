#include<stdio.h>

int main(void){
   int n[100],x[300],i,j,k,cnt[300]={0},a=0,b,c=0;
while(c<1000){
      scanf("%d %d",&n[a],&x[a]);
      if(n[a]==0 && x[a]==0){
      break;
    }
    a=a+1;
      c=c+1;
}



 for(a=0;a<c;a++){
    for(i=1;i<=n[a];i++){
       for(j=1;j<=n[a];j++){
          for(k=1;k<=n[a];k++){
			b=i+j+k;
             if(b==x[a] && i!=j && j!=k && k!=i)
                cnt[a]=cnt[a]+1;
          }
       }
    }
     printf("%d\n",cnt[a]/6);
}
 return 0;
}
