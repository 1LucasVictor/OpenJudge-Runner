#include <stdio.h>
#include <string.h>
#define CMAX 12 
#define MAX 100000

void insert(char[]);
int find(char[]);

int n;
char dictionary[MAX][MAX];

int main(){
    char command[MAX][CMAX],str[MAX][CMAX];

    scanf("%d",&n);

    for(int i = 0;i < n;i++){
        scanf("%s",command[i]);
        scanf("%s",str[i]);
    }

    for(int i = 0;i < n;i++){
       
        if(strcmp("insert",command[i]) == 0){
            insert(str[i]);
        }
        else if(strcmp("find",command[i]) == 0){
            if(find(str[i]))printf("yes\n");
            else printf("no\n");
        }
    }

    return 0;
}

void insert(char str[CMAX]){
    static int i = 0;
    strcpy(dictionary[i],str);
    i++;
}

int find(char str[CMAX]){
    for(int i = 0;i < n;i++)if(strcmp(dictionary[i],str) == 0)return 1;
    return 0;
}
