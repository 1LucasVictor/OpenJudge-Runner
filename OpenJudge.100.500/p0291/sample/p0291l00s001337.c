#include<stdio.h>

#define NUMBER_1 200000

int main()
{
int i, j, num;
int n;
int max = 1-10*10*10*10*10*10*10*10*10;
int min = 1+10*10*10*10*10*10*10*10*10;
int Rt[NUMBER_1];

scanf("%d", &n);

for(num=0; num<n; num++){
scanf("%d", &Rt[num]);
}

for(j=1; j<=(n-1); j++){
for(i=0; i<=(j-1); i++){
if(min>Rt[i]){
min = Rt[i];
if((Rt[j]-min)>max){
max = Rt[j]-min;
}
}
else if(min==Rt[i]){
if((Rt[j]-min)>max){
max = Rt[j]-min;
}
else if((Rt[j]-min)==max){
}
}
}
}

printf("%d\n", max);

return 0;
}