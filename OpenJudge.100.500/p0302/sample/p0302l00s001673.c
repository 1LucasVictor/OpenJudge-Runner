#include<stdio.h>
#include<string.h>
#define LEN 13
#define N 1000000

int A(char);
int insert(char*);
int find(char*);
int keyA(int);
int keyB(int);
int getkey(char*);

char dic[N][LEN];

int main(){
    int i,n;
    
    char com[7],in[LEN];
    
    for(i = 0;i < N;i++){
        dic[i][0] = '\0';
    }
    
    scanf("%d",&n);
    
    for(i = 0;i < n;i++){
        scanf("%s %s",com,in);
        
        if(strcmp(com,"insert") == 0){
            insert(in);
        }
        else if(strcmp(com,"find") == 0){
            if(find(in) == 1) printf("yes\n");
            else printf("no\n");
        }
    }
    return 0;
}

int A(char a){
    
    if(a == 'A') return 0;
    else if(a == 'C') return 1;
    else if(a == 'G') return 2;
    else return 3;
}

int insert(char* a){
    int i,key,num;
    
    key = getkey(a);
    
    for(i = 0; ;i++){
        num = (keyA(key) + i*keyB(key)) % N;
        if(strcmp(dic[num],a) == 0) return 1;
        else if(strlen(dic[num]) == 0){
            strcpy(dic[num],a);
            return 0;
        }
    }
    return 0;
}

int find(char *a){
    int i,key,num;
    key = getkey(a);
    for(i = 0; ;i++){
        num = (keyA(key) + i*keyB(key)) % N;
        if(strcmp(dic[num],a) == 0) return 1;
        else if(strlen(dic[num]) == 0) return 0;
    }
    return 0;
}

int keyA(int key){
    return key % N;
}

int keyB(int key){
    return 1 + key % (N - 1);
}

int getkey(char *a){
    int i,sum = 0,p = 1;
    
    for(i = 0;i < strlen(a);i++){
        sum += p * A(a[i]);
        p*=5;
    }
    return sum;
}

