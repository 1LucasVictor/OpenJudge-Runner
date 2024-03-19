#include<stdio.h>
int main()
{
    int N,i,j,k,p=0,l;
    scanf("%d",&N);
    int ara[N];
    int even[N];
    for(k=0;k<N;k++){
        scanf("%d",&ara[k]);
    }
    for(i=0;i<N;i++){
        if(ara[i]%2==0){
            even[p]=ara[i];
             p++;
        }
    }
    for(l=0;l<p;l++){
        if(even[l]%3==0 || even[l]%5==0){
            j=1;
        }
        else{
            j=0;
            break;
        }
    }
    if(j){
        printf("APPROVED");
    }
    else{
        printf("DENIED");
    }
    return 0;
}
