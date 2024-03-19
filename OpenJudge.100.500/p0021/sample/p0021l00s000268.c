#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Input(int *p, int l){
    int i;
    for(i=0; i<l; i++)
        p[i] = 0;
    for(i=0; i<l; i++)
        scanf("%d", &p[i]);
}

int Findupperbond(int *p, int *lp){
    int i, j, upperbond = 0, sum = 0, max = 0;
    for(i=0; i < *lp; i++){
        if(p[i]>0){
            upperbond = i;
            break;
        }
    }
   
    *lp -= upperbond;
    for(i=0; i < *lp; i++){
        p[i] = p[i + upperbond];
    }
    for(j=0; j<=*lp; j++){
        sum = 0;
        for(i=0; i<j; i++){
            sum += p[i];
        }
        if(sum >= max)
            max = sum;
    }
    return(0);
}

int Findlowerbond(int *p, int *lp){
    int i, j = 0, k = 0, lowerbond = 0, sum = 0, max = 0;
    for(i=*lp-1; i>=0; i--){
        k++;
        if(p[i]<=0){
            j++;
        }
        if(p[i]>0){
            lowerbond = k-1;
            break;
        }
    }
    *lp -= lowerbond;
    if(*lp == j){
        max = -100000;
        for(i=0; i<*lp; i++){
            if (p[i] > max)
                max = p[i];
        }
        return(max);
    }
    
    
    
    for(j=0; j<=*lp; j++){
        sum = 0;
         for(i=0; i<j; i++){
            sum += p[i];
        }

        if(sum >= max)
            max = sum;
    }
    return max;
}

int main(){
    int p[100][5001], lenth, *lenthpt, i = 0, j = 0, max[50];
    lenthpt = &lenth;
    do
    {
        scanf("%d", &lenth);
        if (lenth == 0) break;
        Input(p[i], lenth);
        Findupperbond(p[i], lenthpt);
        max[i] = Findlowerbond(p[i], lenthpt);
        i++;
    } while(lenth != 0);
    for(j=0; j<i; j++){
        printf("%d", max[j]);
        printf("\n");
    }
    
}


