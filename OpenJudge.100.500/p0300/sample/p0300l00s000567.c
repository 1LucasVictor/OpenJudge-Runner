#include<stdio.h>

#define M 10000

int main(void){
    int n,q,i,j,s[M],t,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    scanf("%d",&q);
    for(i=0;i<q;i++){
        scanf("%d",&t);
        for(j=0;j<n;j++){
            if(t==s[j]){
                sum++;
                break;
            }
        }
    }
  printf("%d",sum);
  return 0;
    
}

