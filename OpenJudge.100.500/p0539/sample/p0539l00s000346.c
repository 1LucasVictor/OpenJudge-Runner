#include<stdio.h>

int main(){

    int N,a=1,b=0,c=0;


    scanf("%d",&N);

    while(a<10){


        b = N/a;
       
        if(b <= 9 && N%a ==0){
            c=1;
            break;
        }

        a++;
    }


    if(c==1) {
        printf("Yes");
    }

    else {
        printf("No");
    }
    
    return 0;
}