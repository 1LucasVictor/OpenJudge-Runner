#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>




int main(){
int X,Y,q,r,Q,R;
scanf("%d%d",&X,&Y);

q = (Y-2*X)/2;
r = (4*X-Y)/2;

Q = (Y-2*X)%2;
R = (4*X-Y)%2;

if(q<0 || r<0){
    printf("No");
    }
else{
        if(Q==0 && R==0){
        printf("Yes");
}
        else{printf("No");}
}
return 0;
}


