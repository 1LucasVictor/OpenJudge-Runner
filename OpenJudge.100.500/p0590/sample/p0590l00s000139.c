#include <stdio.h>
int main() {
    int antennas[5];
    for(int i=0;i<5;i++){
    scanf("%d",&antennas[i]);
    }
    int f=0;
    int k;
    scanf("%d",&k);
    int i,j;
    for(i=0;i<5;i++){
        for(j=i;j<5;j++){
            if(antennas[j]-antennas[i]<=k){
                continue;
            }else{
                f=1;
                printf(":(");
                break;
            }
        }
        if (f==1){
            break;
        }
    }
    if (f==0){
        printf("Yay!");
    }
    return 0;
}