#include<stdio.h>
#define N 200000 

int main(void){
int Rt[N], RMAX = 0, R = 0;
int n, s;
int i, j;

scanf("%d",&n);
for(i = 0; i < n; i++){
scanf("%d", &s);
Rt[i] = s;
}
R = Rt[1]-Rt[0];
RMAX = R;	
for( i = 0; i < n; i++){
for( j = i + 1; j < n; j++){
R =Rt[j] - Rt[i];
if( R > RMAX) RMAX = R;

}
}
printf("%d\n", RMAX);



return 0;
}