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
x[i].check=0;
}

while(count<n){
for(i=0;i<n;i++){
if(x[i].num-q<=0 && x[i].check==0){
t+=x[i].num;
printf("%s %d\n", x[i].name, t);
count++;
x[i].num=0;
x[i].check=1;
}
 else if(x[i].num-q>0 && x[i].check==0){
x[i].num-=q;
t+=q;
}
}
}
return 0;
}
