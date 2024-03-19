#include<stdio.h>
int main(){
  int n,x,i=0;
  do{
    scanf("%d%d",&n,&x);
    if(x==0||n<3||100<n)
      return 0;

    int j,k,l;
    for(j=1;j<=n;j++){
      for(k=j;k<=n;k++){
        for(l=k;l<=k;l++){
          if(j+k+l==x)
            i++;
        }
      }
    }
    printf("%d\n",i);
  }while(n!=0&&x!=0);

  return 0;
}