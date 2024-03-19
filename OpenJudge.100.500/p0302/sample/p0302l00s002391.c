#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int m=11046527;

typedef struct opes{
    char ope1[100];
    char ope2[100];
}opes;

int h1(int key){
    return key%m;
}

int h2(int key){
    return 1+(key%(m-1));
}

int h(int key, int i){
    return (h1(key)+i*h2(key))%m;
}

int stringToInt(char *key){
    char num[50], i=0;
    while(*key != '\0'){
        if(*key=='A'){
            num[i]='1';
        }else if(*key=='C'){
            num[i]='2';
        }else if(*key=='G'){
            num[i]='3';
        }else if(*key=='T'){
            num[i]='5';
        }else{
            printf("invalid value\n");
        }
        i++;
        key++;
    }
    return atoi(num);
}

int insert(int A[], int key){
    int i=0, j;
    while(1){
        j=h(key, i);
        if(A[j]=='\0'){
            A[j]=key;
            return j;
        }else{
            i++;
        }
    }
    return -1;
}

int search(int A[], int key){
    int i=0, j;
    while(1){
        j=h(key, i);
        if(A[j]==key){
            return 1;
        }else if(A[j]=='\0'){
            return 0;
        }else{
            i++;
        }
    }

    return 0;
}

int main(){
    int num, i, hash[10000];
    scanf("%d", &num);
    opes ope[num];
    for(i=0; i<num; i++){
        scanf("%s %s", ope[i].ope1, ope[i].ope2);
    }
    for(i=0; i<num; i++){
        if(!strcmp(ope[i].ope1, "insert")){
            insert(hash, stringToInt(ope[i].ope2));
        }else{
            if(search(hash, stringToInt(ope[i].ope2))){
                printf("yes\n");
            }else{
                printf("no\n");
            }
        }
    }
    return 0;
}