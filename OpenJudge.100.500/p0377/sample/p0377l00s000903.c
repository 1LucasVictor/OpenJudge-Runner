#include <stdio.h> 
 #include <stdbool.h> 


int main(){ 
 int i, j, x;
 int num;
 char ch; 
 char marks[4]={'S', 'H', 'C', 'D'}; 
    int cards[4][13]={false};

     scanf("%d ", &x); 
     for(i=0;i<x;i++){ 
         scanf("%c %d ", &ch, &num); 
         for(j=0;j<4;j++){ 
             if(ch==marks[j]){ 
                 cards[j][num-1]=true; 
                 break; 
             } 
         } 
     } 
     for(i=0;i<4;i++){ 
         for(j=0;j<13;j++){ 
             if(!cards[i][j]){ 
                 printf("%c %d\n", marks[i], j+1); 
             } 
 } 
     }
     return 0; 
 } 
