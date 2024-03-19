/* 
 * File:   main.c
 * Author: s1252007
 *
 * Created on June 24, 2018, 9:22 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main() 
{ 

    int count,j,n,time,remain,flag=0,time_quantum; 
    int *rt; 
    char **arr;
    scanf("%d %d", &n, &time_quantum); 
    
    arr = (char **)malloc(n * sizeof(char *));
    for (int ix=0; ix<n; ++ix)
         arr[ix] = (char *)malloc(50010 * sizeof(char));
    rt = (int *)malloc(sizeof(int) * n);
    
    remain=n; 
    
    for(count=0;count<n;++count) scanf("%s %d",arr[count], &rt[count]);
    
    for(time=0,count=0;remain!=0;) 
    { 
        if(rt[count]<=time_quantum && rt[count]>0) 
        { 
            time+=rt[count]; 
            rt[count]=0; 
            flag=1; 
        } 
        else if(rt[count]>0) 
        { 
            rt[count]-=time_quantum; 
            time+=time_quantum; 
        } 
        if(rt[count]==0 && flag==1) 
        { 
            remain--; 
            printf("%s %d\n",arr[count],time); 
            flag=0; 
        } 
        if(count==n-1) 
            count=0; 
        else if(count+1<=time) 
            ++count; 
        else 
            count=0; 
    }
    return 0; 
}

