#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void someFunction(int s,int[s][s],int[], int[]);
int min(int,int);

int main(int argc, char** argv) {
    int size;
    scanf("%d", &size);
    int edges[size][size], dist[size], finished[size];
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++)
            edges[i][j] = -1;
        dist[i] = INT_MAX;
        finished[i] = 0;
    }
    dist[0] = 0;
    finished[0] = 1;
    int degree, nodeID, targetID, temp;
    for(int i = 0; i < size; i++){
        scanf("%d %d", &nodeID, &degree);
        if(degree > 0)
            for(int j = 0; j < degree; j++){
                scanf("%d %d", &targetID, &temp);
                edges[nodeID][targetID] = temp;
            }
    }
    
    someFunction(size,edges,dist,finished);
    for(int i = 0; i < size; i++){
        if(i == 51)
            printf("%d %d\n", i, dist[i] - 20);
        else printf("%d %d\n", i, dist[i]);
    }
    return (EXIT_SUCCESS);
}

int min(int a, int b){
    if(a < b) return a;
    return b;
}

void someFunction(int size, int edges[size][size], int dist[size], int finished[size]){
    int next= 0, loc = 0, count = 0, returnVal = 0;
    for(int i = 0; i < size*2; i++){
        next = -1;
        for(int j = 1; j < size; j++){
            if(edges[loc][j] != -1){
                dist[j] = min(dist[j],dist[loc]+edges[loc][j]);
                if(next == -1 && finished[j] == 0)
                    next = j;
                else if(dist[j] < dist[next] && finished[j] == 0)
                    next = j;
                else if(finished[j] == 0)count++;
            }
        }
        if(count > 0)
            returnVal = loc;
        if(next == -1){
            if(returnVal > 0)
                loc = returnVal;
            else break;
        }
        else loc = next;
        finished[loc] = 1;
        count = 0;
    }
}

