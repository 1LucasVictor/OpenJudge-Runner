#include <stdio.h>
int main(void)
{
int n, no, a, i, j;
char m;
int x[4][13] ={{0}};

scanf("%d",&n);

while(n > 0){
scanf(" %c",&m);
scanf("%d",&no);

if(m == 'S')
a = 0;
if(m == 'H')
a = 1;
if(m == 'C')
a = 2;
if(m == 'D')
a = 3;

x[a][no - 1] = 1;
n--;
}

for(i = 0; i < 4; i++){
for(j = 0; j < 13; j++){
if(x[i][j] == 0){

if(i == 0)
m = 'S';
if(i == 1)
m = 'H';
if(i == 2)
m = 'C';
if(i == 3)
m = 'D';

printf("%c %d\n", m, j + 1);
}
}
}

return 0;
}