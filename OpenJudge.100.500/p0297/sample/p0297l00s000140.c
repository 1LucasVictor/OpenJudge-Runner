#include <stdio.h>
#include <string.h>

struct Queue{
char name[10];
int num;
int check;
};

int main(){
int n, q, i, count=0, t=0, total=0;
struct Queue x[100000];
scanf("%d%d", &n, &q);
for(i=0;i<n;i++){
scanf("%s%d", x[i].name, &x[i].num);
total+=x[i].num;
}

while(count<n){
for(i=0;i<n;i++){
if(x[i].num<=q && x[i].check!=1){
    count++;
t+=x[i].num;
x[i].num=0;
x[i].check=1;
printf("%s %d\n", x[i].name, t);
}
 else if(x[i].num>q && x[i].check!=1){
x[i].num-=q;
t+=q;
}
}
}
return 0;
}
