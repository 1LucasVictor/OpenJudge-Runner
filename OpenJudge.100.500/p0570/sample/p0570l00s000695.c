#include <stdio.h>
#include <stdlib.h>

int main (){
    int a=0;
    int b=0;
    int k=0;
    int stop=0;

    scanf("%d %d",&a,&b);

    if(a<b){
        stop=b;
    }else{
        stop=a;
    }

   for(int i=0;i<stop;i++){

       if(abs(a-k)==abs(b-k)){
           k=i;
           break;
       }else{
           k++;
       }
   }
    if(k<stop){
        printf("%d",k);
    }else{
        printf("IMPOSSIBLE");
    }

    return 0;
}