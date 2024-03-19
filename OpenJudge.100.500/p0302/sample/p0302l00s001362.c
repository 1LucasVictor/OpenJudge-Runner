#include <stdio.h>
#include <string.h>
#define CMAX 12 
#define MAX 100000

void insert(char[]);
int find(char[]);

int n;
char dictionary[MAX][MAX];

int main(){
    char command[CMAX],str[CMAX];

    scanf("%d",&n);

    for(int i = 0;i < n;i++){
        scanf("%s",command);
        scanf("%s",str);
        if(strcmp("insert",command) == 0){
            insert(str);
        }
        else if(strcmp("find",command) == 0){
            if(find(str))printf("yes\n");
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
