#include <stdio.h>

int main(void){
    int i,j,n,temp,p;
    int N[101];
    scanf("%d", &n);
    for(i=0;i<n;i++) scanf("%d",&N[i]);
    for(i=1;i<n;i++){
        for(p=0;p<n;p++){
            printf("%d ",N[p]);
        }
        printf("\n");
        temp = N[i];
        j=i-1;
        while(j>=0 && N[j]>temp){
            N[j+1] = N[j];
            j--;
        }
        N[j+1] = temp;
    }
    for(p=0;p<n;p++){
        printf("%d ",N[p]);
    }
    printf("\n");
    return(0);

}