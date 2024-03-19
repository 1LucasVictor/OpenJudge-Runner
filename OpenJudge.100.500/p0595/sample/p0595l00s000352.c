#include<stdio.h>

int max1(int a, int b) { return a > b ? a : b; }

int main(){
    int a,b,k,counter=0;
    scanf("%d %d %d",&a,&b,&k);
    for(int i=1;i<=max1(a,b);i++){
        if(a%i==0&&b%i==0){
            counter++;
        }
        if(counter==k){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}