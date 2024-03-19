#include<stdio.h>
int main(void){
 int N;
 scanf("%d",&N);
 int line[N];
 for(int i=0;i<N;i++){
      scanf("%d",&line[i]);
 }
 for(int j=0;j<N;j++){
     for(int k=j+1;k<N;k++){
         if(line[j]<line[k]){
             int tmp = line[j];
	     line[j] = line[k];
	     line[k] = tmp;
	 }
     }
 }
 int count = 0;
 for(int a=0;a<N;a++){
     if(line[a]==line[a+1]){
	 count +=1;
         printf("NO");
	 break;
     }
 }
 if(count==0){
     printf("YES");
 }
 return 0;
}
