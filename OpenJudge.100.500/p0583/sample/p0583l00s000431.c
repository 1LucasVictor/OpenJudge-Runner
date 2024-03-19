#include<stdio.h>

int main(){
    int i, j, k;
    int N, A, B, C, D;
    char s[210000];
    int numN=0, maxN=0, numR=0, maxR=0;
    int ans, tmp;

    scanf("%d %d %d %d %d", &N, &A, &B, &C, &D);
    scanf("%s", &s);
    if(C>D){
        tmp=D;
    }else{
        tmp=C;
    }
    for(i=B-2; i<tmp+1; i++){
        if(s[i]=='.'){
            if(numR>0){
                numR=0;
            }
            numN++;
            if(numN>maxN){
                maxN=numN;
            }
        }else{
            numR++;
            numN=0;
        }
    }
    numR=0;
    numN=0;
    if(C>D){
        tmp=C;
    }else{
        tmp=D;
    }
    for(i=A; i<tmp; i++){
        if(s[i]=='#'){
            if(numN>0){
                numN=0;
            }
            numR++;
            if(numR>maxR){
                maxR=numR;
            }
        }else{
            numN++;
            numR=0;
        }
    }
    //printf("%d %d", maxN, maxR);

    if(C>D){
        if(maxN>=3 && maxR<=2){
            printf("Yes");
        }else{
            printf("No");
        }
    }else{
        if(maxR<=2){
            printf("Yes");
        }else{
            printf("No");
        }
    }

    return 0;
}