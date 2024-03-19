#include<stdio.h>

int main(){

    int i,j;
    int n,k, min;

    //----input----
    scanf("%d %d", &n, &k);
    
    //----mainFunction----
    min = 0;

    while(k != 1){

        if(n - k >= 0){
            n = n - k;
            //printf("%d\n", n);
        } else {
            n = - (n - k);
            //printf("%d\n", n);
        }

        if(n - k >= 0){
            min = n - k;
            if(min > n){
                break;
            }
        } else {
            min = - (n - k);
            if(min > n){
                break;
            }
        }
       
    }


    //----output----
    if(k != 1){
        printf("%d\n", n);
    } else {
        printf("%d\n", 0);
    }
     
  

    return 0;

}
