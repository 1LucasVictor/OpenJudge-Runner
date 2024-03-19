#include<stdio.h>
int main(void){
        int n,i,j,x,f;
        char h;
        scanf("%d",&n);
        int c[4][13];
        for(i=0;i<4;i++){
         for(f=0;f<13;f++){
          c[i][f]=0;
         }
        }
        for(i=0;i<n*2;i++){
         scanf("%c %d",&h,&x);
         if(h=='S'){
          c[0][x-1]=1;
         }
         if(h=='H'){
          c[1][x-1]=1;
         }
         if(h=='C'){
          c[2][x-1]=1;
         }
         if(h=='D'){
          c[3][x-1]=1;
         }
        }
        for(i=0;i<13;i++){
          if(c[0][i]==0){
          printf("S %d\n",i+1); 
         }
        }
        for(i=0;i<13;i++){
          if(c[1][i]==0){
          printf("H %d\n",i+1); 
         }
        }
        for(i=0;i<13;i++){
          if(c[2][i]==0){
          printf("C %d\n",i+1); 
         }
        }
        for(i=0;i<13;i++){
          if(c[3][i]==0){
          printf("D %d\n",i+1); 
         }
        }
 
	return 0;
}
