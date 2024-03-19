//
//  AOJ0013.c
//  
//
//  Created by 中野 優 on 2014/02/23.
//
//

#include <stdio.h>
int main(void){
    int stack[10],i=0,j=0,temp,ans[10]={0};
    while(scanf("%d",&temp)!=EOF) {
        if(temp!=0){
            stack[i]=temp;
            i++;
        } else {
            ans[j]=stack[i-1];
            j++;
            i--;
        }
    }
    for(i=0;i<j;i++) printf("%d\n",ans[i]);
    return 0;
}