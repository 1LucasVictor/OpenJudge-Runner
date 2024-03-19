#include <stdio.h>

int main(void){
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    //min
    int min = a[0];
    for(int t=0;t<n;t++){
        if(a[t]<min){
            min=a[t];
        }
    }
     //max
    int max = a[0];
    for(int s=0;s<n;s++){
        if(a[s]>max){
            max=a[s];
        }
    }
    int sum=0;
    for(int k=0;k<n;k++){
        sum += a[k];
    }
    printf("%d %d %d\n",min,max,sum);
    return 0; /*0?????????*/
}