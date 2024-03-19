#include <stdio.h>
#include <math.h>

int main(void){

    int count=0;
    int ans=0;
    int size=2*pow(10,5);
    char S[size];
    char T[size];

    scanf("%s",S);
    scanf("%s",T);

    for(int i=0;i<size;i++){
        if(S[i]!='\0'){
            count++;
        }else{
            break;
        }
    }

    for(int i=0;i<count;i++){
        if(S[i]!=T[i]){
            ans++;
        }
    }

    printf("%d\n",ans);

    return 0;
}