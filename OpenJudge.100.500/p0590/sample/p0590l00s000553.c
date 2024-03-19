#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a[5],b[5],i,j,k,l,d;
    
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    
    scanf("%d",&d);
    
    for(i=1;i<5;i++){
    if(abs(a[0]-a[i])>d)
    b[0]=1;
    else
    b[0]=0;
    }
    
    for(j=2;j<5;j++){
     if(abs(a[1]-a[j])>d)
    b[1]=1;
    else
    b[1]=0;
    }
    
    for(k=3;k<5;k++){
     if(abs(a[2]-a[k])>d)
    b[2]=1;
    else
    b[2]=0;}
    
    for(l=4;l<5;l++){
     if(abs(a[3]-a[l])>d)
    b[3]=1;
    else
    b[3]=0;}
    
    if(b[0]==0&&b[1]==0&&b[2]==0&&b[3]==0)
    printf("Yay!\n");
    else
    printf(":(\n");
    
    return(0);
}