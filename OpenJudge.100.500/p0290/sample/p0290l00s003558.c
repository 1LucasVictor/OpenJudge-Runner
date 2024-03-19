#include<stdio.h>
#include<stdlib.h>
int IsPrime(int);
int main() {
  int i,count=0,n,*sosu;
    scanf("%d",&n);
    
    sosu = (int *)malloc(n * sizeof (int));
    
   
    
    for(i=n-1;i>=0;i--){
        scanf("%d",&sosu[i]);
        if(IsPrime(sosu[i]) == 1) count++;
    }
    printf("%d\n",count);
    return 0;
}

 int   IsPrime(int n){


    


   int i;

    if (n < 2)
        return 0;
    else if (n == 2)
        return 1;

    if (n % 2 == 0)
        return 0;

    for (i = 3; i <= n / i; i += 2)
         if (n % i == 0)
            return 0;
    return 1;

}

