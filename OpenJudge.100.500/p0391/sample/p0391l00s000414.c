#include <string.h>
#include <stdio.h>

void print(char str[1000], int a, int b){
    int i;
    
    for(i=a; i<=b; i++){
        printf("%c",str[i]);
    }
    printf("\n");
}

void reverse(char str[1000], int a, int b){
    int i;
    char copy[1000];
    
    strcpy(copy,str);
    for(i=0; i<=b-a; i++){
        str[a+i]=copy[b-i];
    }
}

void replace(char str[1000],int a, int b){
    int i;
    char p[1000];
    
    scanf("%s",p);
    for(i=0; i<=b-a; i++){
        str[a+i]=p[i];
    }
}


int main(void){
    char str[1000];
    char order[10];
    int n,i,a,b;
    
    scanf("%s",str);
    scanf("%d",&n);
    
    for(i=0; i<n; i++){
        scanf("%s %d %d",order,&a,&b);
        
        if(strcmp(order,"print") == 0){
            print(str,a,b);
        }
        
        else if(strcmp(order,"reverse") == 0){
            reverse(str,a,b);
        }
        
        else if(strcmp(order,"replace") == 0){
            replace(str,a,b);
        }
    }
    return 0;
}