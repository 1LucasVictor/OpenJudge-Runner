#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int min(int A,int B){
    if(A<=B){
        return A;
    }else{
        return B;
    }
};

int main(){
    char S[100000];
    int i;
    int count_one=0;
    int count_zero=0;
    scanf("%s",&S);

    for(i=0;i<strlen(S);i++){
        if(S[i]=='0'){
            count_zero+=1;
        }else if(S[i]=='1'){
            count_one+=1;
        }
    }
    
    printf("%d\n",min(count_one,count_zero)*2);
    return 0;
}