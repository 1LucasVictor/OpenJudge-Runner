#include<stdio.h>
int main(){
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

int d = 0;

if(a == 5 || a == 7){
d++;
}

if(b == 5 || b == 7){
d++;
}

if(c == 5 || c == 7){
d++;
}

if(d == 3){
if(17 == a+b+c){
printf("YES");
}
else{
printf("NO");
}
}

else{
printf("NO");
}

return 0;
}