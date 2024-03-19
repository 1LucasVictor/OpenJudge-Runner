#include <stdio.h>

int main(){
    int n;
    scanf("%d\n",&n);
    int S[13]={0};
    int H[13]={0};
    int C[13]={0};
    int D[13]={0};
    int i;
    for(i=0;i<n;i++){
        char category;
        int num;
        if(i!=n-1){
            scanf("%c %d\n",&category,&num);
        }else{
            scanf("%c %d",&category,&num);
        }
        if(category=='S'){
            S[num-1]=1;
        }
        else if(category=='H'){
            H[num-1]=1;
        }
        else if(category=='C'){
            C[num-1]=1;
        }
        else if(category=='D'){
            D[num-1]=1;
        }
    }
    int j;
    for(j=0;j<13;j++){
        if(S[j]==0){
            printf("S %d\n",j+1);
        }
    }
    for(j=0;j<13;j++){
        if(H[j]==0){
            printf("H %d\n",j+1);
        }
    }
    for(j=0;j<13;j++){
        if(C[j]==0){
            printf("C %d\n",j+1);
        }
    }
    for(j=0;j<13;j++){
        if(D[j]==0){
            printf("D %d\n",j+1);
        }
    }
    return 0;
}



