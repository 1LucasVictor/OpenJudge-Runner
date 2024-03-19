#include <stdio.h>
#define MAX 100
#define IN 10000


int main(){
int n,i,j,dat[MAX][MAX],min,tmp[MAX],mini=0,a[MAX],flag[MAX],k,sum=0;

scanf("%d",&n);

for ( i = 0; i < n;i++){
for (j = 0;j < n;j++){
scanf("%d",&dat[i][j]);
}
}
for ( i =0 ;i < n; i++){
flag[i]=0;
a[i]=IN;
}
a[0] =0;

for (k = 0 ;k < n-1;k++){
min =IN;
  
for ( i = 0; i < n;i++){
if(a[i] < min && flag[i] ==0){
min = a[i];
mini = i;
}
}
flag[mini]= 1;

for (j = 0;j < n;j++){

if(dat[mini][j] < a[j] && dat[mini][j] != -1 && flag[j]==0){
a[j] = dat[mini][j];
}
     
      
     
}
   
}

for ( i =0 ; i < n; i++){
sum += a[i];
}
printf("%d\n",sum);








return 0;

}