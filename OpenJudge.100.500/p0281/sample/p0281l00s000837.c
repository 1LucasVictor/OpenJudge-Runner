#include<stdio.h>
#define zyougen 150
int i, j, num, gyou, retu, kosuu, omomi, A[zyougen][zyougen]={0};
int point, finnum=0; min[zyougen], kyori, used[zyougen], box[zyougen]={0};
 
int nearest(int used[]){
int best=10000000, next;
 for(i=0; i<num; i++){
   if (used[i] != -1) {
     if(best > min[i]){
       best = min[i];
       next = i;
     }
   }
 }

 finnum++;

 if(finnum == num-1){
   next = -1;
 }

 return next; 
}
 
int main(){
 
 scanf("%d", &num);
 for(i=0; i<num; i++){
   scanf("%d %d", &gyou, &kosuu);
   for(j=1; j<=kosuu; j++){
     scanf("%d %d", &retu, &omomi);
     A[gyou][retu] = omomi;
   }
   min[i] = 10000000;
 }

 point = 0;
 used[point] = 1;
 min[point] = 0;
 
 while(point != -1){
   for(i=0; i<num; i++){
     if (A[point][i] >= 1) {
       kyori = min[point] + A[point][i];
       if (min[i] > kyori) {
         min[i] = kyori;
       }
       if (used[i] == 0) {
         used[i] = 1;
       }
     }
   }
   used[point] = -1;
   point = nearest(used);
 }
 
 
 for(i=0; i<num; i++){
   printf("%d %d\n", i, min[i]);
 }
 
 return 0;
}