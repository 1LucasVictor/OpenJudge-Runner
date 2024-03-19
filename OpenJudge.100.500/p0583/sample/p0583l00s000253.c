#include <stdio.h>
#include <stdlib.h>

int A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W;
double X, Y, Z;

int run(){
    
    int i, j, k, l, m, n;
    char *S;
    
    scanf("%d", &N);
    S = (char *)malloc(sizeof(char)*(N+3));
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    scanf("%s", S);
    
    A--;
    B--;
    C--;
    D--;
    
    S[A] = 'A';
    S[B] = 'B';
    
    S[N] = '#';
    S[N+1] = '#';
    S[N+2] = '\0';
    // printf(":: %s", S);
    
    if(C < D){
        for(i = A; i < C; i++){
            if(S[i+1]!='#') continue;
            if(S[i+1]=='#'){
                i++;
                if(S[i+1]=='#') return 1;
            }
        }
        if(i!=C) return 11;
        for(i = B; i < D; i++){
            if(S[i+1]!='#') continue;
            if(S[i+1]=='#'){
                i++;
                if(S[i+1]=='#') return 2;
            }
        }
        if(i!=D) return 12;
        return 0;
    }else{
        for(i = B; i < D; i++){
            if(S[i+1]!='#') continue;
            if(S[i+1]=='#'){
                i++;
                if(S[i+1]=='#') return 3;
            }
        }
        if(i!=D) return 13;
        int alpha = 1;
        int beta = 0;
        for(i = A; i < C; i++){
            if(S[i+1]!='#'){
                alpha++;
                if(alpha > 2) if(i < D+1)  if(B+1 < i) beta = 1;
                continue;
            }
            if(S[i+1]=='#'){
                alpha = 0;
                i++;
                if(S[i+1]=='#') return 4;
                alpha++;
            }
        }
        if(i!=C) return 14;
        if(beta==0){
            if((S[A+1]=='B') && (S[A+2]=='.')) return 0;
            return 5;
        }
        return 0;
    }
}

int main(){
    int ret = run();
    if(ret==0) printf("Yes");
    else printf("No");
    
    // printf("(%d)\n", ret);
    return 0;
}
