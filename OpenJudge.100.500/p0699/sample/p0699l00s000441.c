#include<stdio.h>
int main(){
    int c5=0,c7=0,i,t;
    for(i=0;i<3;i++){
        scanf("%d",&t);
        if(t==5) c5++;
        else if(t==7) c7++;
    }
    if(c5==2 && c7==1) printf("YES");
    else printf("NO");
    return 0;
}
