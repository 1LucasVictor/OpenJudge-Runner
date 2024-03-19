#include<stdio.h>
#include<stdlib.h>
int main(){
    int N,D;
    scanf("%d",&N);
    scanf("%d",&D);
    long long int dplus= D*D;
    int x,y;
    long long int a,b;
    int i;
    long long int dist=0;
    int count=0;
    for(i=0;i<N;i++){
        scanf("%d",&x);
        scanf("%d",&y);
        a= abs(x);
        b= abs(y);
        dist = (a*a) + (b*b);
        if (dist<=dplus){
            count++;
        }
    } 
    printf("%d",count);
    return 0;
}