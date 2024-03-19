#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(){
    char I[3]="aaa";
    int N,M,s;
    char c;
    scanf("%d",&N);
    scanf("%d",&M);
    for (int i=0; i<M; i++) {
        scanf("%d %c",&s,&c);
        if(I[s-1]!='a'){
            if (c!=I[s-1]) {
                printf("-1\n");
                return 0;
            }
        }
        else{
            I[s-1]=c;
        }
    }
    if (N==1) {
        if (M==0) {
            printf("0\n");
            return 0;
        }
        else{
            printf("%c\n",I[0]);
            return 0;
        }
    }
    else{
        for (int i=0; i<N; i++) {
            if (i==0) {
                if(I[i]=='0'){
                    printf("-1\n");
                    return 0;
                }
                else if(I[i]=='a'){
                    printf("1");
                }
                else{
                    printf("%c",I[i]);
                }
            }
            else{
                if(I[i]=='a'){
                    printf("0");
                }
                else{
                    printf("%c",I[i]);
                }
            }
        }
    }
    printf("\n");
    return 0;
}