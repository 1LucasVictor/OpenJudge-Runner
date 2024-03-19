#include<stdio.h>

#define NUMBER 200000

int main()
{
int i, j, num;
int n;
int Rt[NUMBER];
int max = 1-10*10*10*10*10*10*10*10*10;

scanf("%d", &n);

for(num=0; num<n; num++)
scanf("%d", &Rt[num]);

for(j=1; j<=(n-1); j++){
for(i=0; i<=(j-1); i++){
if((Rt[j]-Rt[i])>max){
max = Rt[j]-Rt[i];
}
else{
max = max;
}
}
}

printf("%d\n", max);

return 0;
}