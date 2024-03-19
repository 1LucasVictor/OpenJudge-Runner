#include  <stdio.h>

int main(){
    int a;
    int b;
        scanf ("%d %d",&a,&b);
    int c=a/b;
    if (a%b==0){
         printf ("%d\n",c);
    }
    else {
        printf ("%d\n", c+1);
    }
    
    return 0;
}