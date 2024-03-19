/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: kundaikwangwari
 *
 * Created on July 27, 2019, 8:28 PM
 */

#include <stdio.h>
#include <limits.h>
#define NIL -1
#define N 150
#define White 0
#define Grey 1
#define Black 2
/*
 * 
 */

int n;
int distance[N];
int color[N],table[N][N];

void Initialize(){
 
  for(int i=0; i < n; i++){
    distance[i] = INT_MAX;
    color[i]=White;
  }
  distance[0] = 0;
  color[0] = Grey;
}

void Prim(int x){
   int MWT,u; 
  Initialize();

while(1){
    MWT = INT_MAX;
    for(int i = 0; i < n; i++){
        if(MWT > distance[i] && color[i] != Black ){
            MWT = distance[i];
            u = i; 
        }
} 
    if(MWT == INT_MAX)break;
  color[u] = Black;
  for(int v = 0; v < n; v++){
    if(color[v] != Black && (distance[u] + table[u][v]) < 
            distance[v] && table[u][v] != INT_MAX){
        color[v]=Grey;
	distance[v] = distance[u] + table[u][v];
       
      }  
  }
}
}

int main(int argc, char** argv) {

    
    int initialised;
    scanf("%d",&n);
    
    int  node, Edges,degree,vector;
    //printf("\n");
    for(int a = 0; a < n; a++){
        scanf("%d %d",&node, &degree);
        

        for(int b = 0; b < N; b++)table[node][b] = INT_MAX;
        for(int b = 0; b < degree; b++){   
        scanf("%d",&vector);
        scanf("%d",&table[node][vector]);
        //printf("(%d %d),%d  ",node, vector,table[node][vector]);
        }
        //printf("\n");
    }
    
/*
    for(int a = 0; a < n; a++){
        for(int b = 0; b < n; b++ )printf("(%d %d),%d  ",a, b,table[a][b]);
    }
*/
    Prim(0);
    for(int i=0; i < n; i++){
    printf("%d %d\n",i,distance[i]);
  }
    return (0);
}


