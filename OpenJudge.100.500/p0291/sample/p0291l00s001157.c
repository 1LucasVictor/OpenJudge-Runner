#include<stdio.h>
int main(){

    int n,i,j,k;
    int R[1000000];
    int max,min,maxv;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&R[i]);

    max = 0;
    min = R[0];
    for(i=1;i<n;i++){

        if(R[i]>max){
            max = R[i];
            k = i;
        }
        if(R[i]<min){
            min = R[i];
            j = i;
            max = 0;
        }
        // if(k >= j){
           if(maxv < max-min){
           maxv = max - min;
           }
        // }
         if (k < j){
            if(maxv < min-max){
            maxv = min - max;
            }
         }
    }
    printf("%d\n",maxv);
    return 0;
}
