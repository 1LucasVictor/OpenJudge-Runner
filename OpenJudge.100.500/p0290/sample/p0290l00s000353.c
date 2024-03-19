#include<stdio.h>
int isPrime(int );

int main(){
    int n,i,judge;
    int count=0;
    int num[10];
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
   

       judge = isPrime(num[i]);

    if(judge==1){
        count++;
    }
    }
    printf("%d\n",count);
    return 0;
}

int isPrime(num){
    int i;
    
    if(num == 2)return 1;
    if(num<2 || num%2==0)return 0;
    for(i=3;i*i<=num;i+=2)
      if(num % i == 0)return 0;  
      return 1;
}
