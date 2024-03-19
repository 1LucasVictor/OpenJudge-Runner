#include <stdio.h>
#include <math.h>
#define N_MAX 10000
int isprime(int x){
    if(x==2){
        return 1;
    }
    if(x<2 || x%2==0){
        return 0;
    }
    int i=3;
    while(i<=sqrt(x)){
        if(x%i==0)
        return 0;
        i=i+2;
    }
    return 1;
}

  

int main(){
    int l,x,i;
    int count=0;
    
    scanf("%d",&l);
    for(i=0;i<l;i++){
      scanf("%d",&x);
      count=count+isprime(x);
    }
    printf("%d\n",count);
    return 0;
}

