#include <stdio.h>
int main(){

    int i,s,n;
    int S_data[13]={0},H_data[13]={0},C_data[13]={0},D_data[13]={0};
    char c;
    scanf("%d",&s);
    for (i=0; i<s+1; i++) {
        scanf("%c %d\n",&c,&n);
        if (c=='S')
            S_data[n]=1;
        else if (c=='H')
            H_data[n]=1;
        else if (c=='C')
            C_data[n]=1;
        else if (c=='D')
            D_data[n]=1;
    }
    for (i=1; i<14; i++) {
        if (S_data[i]==0)
            printf("S %d\n",i);
    }
    for (i=1; i<14; i++) {
        if (H_data[i]==0)
            printf("H %d\n",i);
    }
    for (i=1; i<14; i++) {
        if (C_data[i]==0)
            printf("C %d\n",i);
    }
    for (i=1; i<14; i++) {
        if (D_data[i]==0)
            printf("D %d\n",i);
    }
    return 0;
    }