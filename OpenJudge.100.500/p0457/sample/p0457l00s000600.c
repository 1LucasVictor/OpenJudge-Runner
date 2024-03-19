#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100000

void cmp(int *judge, int timeReq_a, int timeReq_b);

int main(void){
    char str[N];
    int books_a, books_b, limit, timeReq_a[N], timeReq_b[N], counter_a = 0, counter_b = 0, judge;
    
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d %d %d", &books_a, &books_b, &limit);
    
    fgets(str, sizeof(str), stdin);
    timeReq_a[0] = atoi(strtok(str, " "));
    int i = 1;
    while(i < books_a){
        timeReq_a[i] = atoi(strtok(NULL, " "));
        // printf("%d ", timeReq_a[i]);                //checker
        i++;
    }
    i = 0;
    
    // printf("\n");                                   //checker
    
    fgets(str, sizeof(str), stdin);
    timeReq_b[0] = atoi(strtok(str, " "));
    i = 1;
    while(i < books_b){
        timeReq_b[i] = atoi(strtok(NULL, " "));
        // printf("%d ", timeReq_b[i]);                //checker
        i++;
    }
    i = 0;
    
    while(limit > 0){
        cmp(&judge, timeReq_a[counter_a], timeReq_b[counter_b]);
        if(judge == 0 && counter_a < books_a){
            limit -= timeReq_a[counter_a];
            if(limit >= 0)counter_a++;
            // printf("aに+1\n");                  //checker
        }
        if(judge == 1 && counter_b < books_b){
            limit -= timeReq_b[counter_b];
            if(limit >= 0)counter_b++;
            // printf("bに+1\n");                  //checker
        }
    }
    
    int total = counter_a + counter_b;
    printf("%d\n", total);
    
    return 0;
}

void cmp(int *judge, int timeReq_a, int timeReq_b){
    if(timeReq_a <= timeReq_b){
        *judge = 0;
    } else {
        *judge = 1;
    }
    return;
}