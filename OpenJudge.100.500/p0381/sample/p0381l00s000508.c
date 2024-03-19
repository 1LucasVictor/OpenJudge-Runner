#include<stdio.h>

int main(void){
   int n[100],x[300],i,j,k,cnt[300]={0},a=0,b;

      scanf("%d %d",&n[a],&x[a]);
      
 
    for(i=1;i<=n[a];i++){
       for(j=1;j<=n[a];j++){
          for(k=1;k<=n[a];k++){
			b=i+j+k;
			/*printf("%d\n",b);*/
             if(b==x[a] && i!=j && j!=k && k!=j)
                cnt[a]=cnt[a]+1;
          }
       }
    }
  printf("%d",cnt[a]/6);
 return 0;
}
   
