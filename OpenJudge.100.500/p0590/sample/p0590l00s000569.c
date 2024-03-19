#include <stdio.h>
int main (void){
int a,b,c,d,e,k;
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
int q=0;
if(b-a>k){
    q=1;
}else if(b-a<k){
    if(c-a>k){
        q=1;
    }else if(c-a<k){
        if(d-a>k){
            q=1;
            }else if(d-a<k){
                if(e-a>k){
                    q=1;
                }
            }
        }
    }

if(c-b>k){
    q=1;
}else if(c-b<k){
    if(d-b>k){
        q=1;
    }else if(d-b<k){
        if(e-b>k){
            q=1;
        }
    }
}
if(d-c>k){
    q=1;
}else if(d-c<k){
    if(e-c>k){
        q=1;
    }
}
if(e-d>k){
    q=1;
}
if(q==1){
    printf(":(");
}else{
    printf("Yay!");
}
}