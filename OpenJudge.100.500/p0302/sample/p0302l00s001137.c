#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define M 1046527
#define NIL (-1)

char H[M][14];
int N;

int getChar(char c){
    if(c == 'A') return 1;
    else if(c == 'C') return 2;
    else if(c == 'G') return 3;
    else if(c == 'T') return 4;
    else return 0;
}

int getKey(char str[]){
    int key = 0;
    int p = 1;
    for(int i=0; i<strlen(str); i++){
        key += p * getChar(str[i]);
        p += 5;
    }
    return key;
}

int h1(int key){
    return (key % M);
}

int h2(int key){
    return (1 + (key % (M - 1)));
}

int insert(char str[]){
    int key = getKey(str);
    for(int i=0; ; i++){
        int h = (h1(key) + i * h2(key)) % M;
        if(strcmp(H[h], str) == 0) return 1;
        else if(strlen(H[h]) == 0){
            strcpy(H[h], str);
            return 1;
        }
    }
    return 0;
}

int find(char str[]){
    int key = getKey(str);
    for(int i=0; ; i++){
        int h = (h1(key) + i * h2(key)) % M;
        if(strcmp(H[h], str) == 0) return 1;
        else if(strlen(H[h]) == 0) return 0;
    }
    return 0;
}


int main(){
    //freopen("Hash.txt", "r", stdin);
    scanf("%d", &N);
    char ins[10];
    char str[14];
    for(int i=0; i<M; i++) H[i][0] = '\0';
    for(int i=0; i<N; i++){
        scanf("%s %s", ins, str);
        if(ins[0] == 'i') insert(str);
        else{
            if(find(str)) printf("yes\n");
            else printf("no\n");
        }
    }
    return 0;
}
