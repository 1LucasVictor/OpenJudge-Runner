#include<stdio.h>

#define NUMBER_1 200000
#define NUMBER_2 199999

int main()
{
int i, j, num;
int n;
int MAX = 1-10*10*10*10*10*10*10*10*10;
int Rt[NUMBER_1];
int max[NUMBER_2];

scanf("%d", &n);

for(num=0; num<n; num++){
scanf("%d", &Rt[num]);
}

for(j=1; j<=(n-1); j++){
for(i=0; i<=(j-1); i++){
max[j] = Rt[j]-Rt[i];
if((max[j])>MAX){
MAX = max[j];
}
}
}

printf("%d\n", MAX);

return 0;
}