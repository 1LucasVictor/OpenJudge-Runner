#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    int k;
    int f=0;
    int i=1;
    scanf("%d %d %d",&a,&b,&k);

    for(i;;i++){
        if((a%i == 0 && b%i == 0 )|| (i%2 == 0 && a%2 == 0 && b%2==0)){
            f += 1;
            if(f == k){
                printf("%d\n",i);
                break;
            }
        }
    }

    return 0;
}