#include <stdio.h>
int main(void){
    int n,a,b,c,i=0;
    int x[9999];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    a=x[0],b=x[0],c=0;
    for(i=0;i<n;i++){
        if(x[i]<a){
            a=x[i];
        }
        if(x[i]>b){
            b=x[i];
        }
        c=c+x[i];
    }
    printf("%d %d %d\n",a,b,c);
  return 0;
}


