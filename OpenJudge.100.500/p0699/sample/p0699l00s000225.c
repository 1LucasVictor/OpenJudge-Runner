#include<stdio.h>
int main(){


 int x[10],a=0,b=0,i;

 for(i=1;i<=3;i++){
    scanf("%d",&x[i]);

    if(x[i]==5){
        a++;
    }
     else if(x[i]==7){
        b++;
    }
}
    if(a==2&&b==1){
        printf("YES");
    }
     else {
        printf("NO");
    }

   return 0;
}
