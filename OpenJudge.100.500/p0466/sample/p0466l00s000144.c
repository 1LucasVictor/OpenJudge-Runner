#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
       char arr[100000],arr2[100000];
       scanf("%s%s",arr,arr2);
       int n = strlen(arr);
       int flag = 0;
       int u = strlen(arr2);
       for(int i =0;i<n;i++)
           if(arr[i]!=arr2[i])
               flag = 1;
          if(flag==0 && u== n+1)
              printf("Yes");
          else
              printf("No");



    return 0;
}