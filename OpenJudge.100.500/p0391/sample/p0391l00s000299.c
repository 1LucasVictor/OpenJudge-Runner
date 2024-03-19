#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void replace(char data[], int a, int b, char p[]){
    for(int i=a; i<=b; i++){
        data[i] = p[i-a];
    }
}

void reverse(char data[], int a, int b){
    char temp[1000];
    for(int i=a; i<=b; i++){
        temp[i-a] = data[b-(i-a)];
    }
    for(int i=a; i<=b; i++){
        data[i] = temp[i-a];
    }   
}

void print(char data[], int a, int b){
    for(int i=a; i<=b; i++){
        printf("%c", data[i]);
    }
    printf("\n");
}

int main()
{
    char data[1000];
    int m;
    char com[20];

    scanf("%s", &data);
    scanf("%d", &m);

    for(int i=0; i<m; i++){
        scanf("%s", &com);

        if(strcmp("replace", com)==0){
            int a, b;
            char p[1000];
            scanf("%d %d %s", &a, &b, &p);
            replace(data, a, b, p);
            //printf("%s\n", data);
        }
        else if(strcmp("reverse", com)==0){
            int a, b;
            scanf("%d %d", &a, &b);
            reverse(data, a, b);
            //printf("%s\n", data);
        }
        else if(strcmp("print", com)==0){
            //printf("%s\n", com);
            int a, b;
            scanf("%d %d", &a, &b);
            print(data, a, b);
        }
    }

    return 0;
}
