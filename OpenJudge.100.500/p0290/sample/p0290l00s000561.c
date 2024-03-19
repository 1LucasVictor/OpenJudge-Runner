#include <stdio.h>

int hantei(int a){
    int i;
    if(a<2) return 0;
    else if(a==2) return 1;
    if(a%2==0) return 0;
    for(i=3;i*i<=a;i+=2){
        if(a%i==0)return 0;
    }
    return 1;
}

int main(){
  int i,n,a,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(hantei(a)) c++;
    }
    printf("%d\n",c);
   return 0;
}

