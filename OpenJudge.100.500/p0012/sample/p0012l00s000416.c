#include <stdio.h>
int main(){
        int arr[1000],start=0,n;
        while(scanf("%d",&n)==1){

           if(n>0){
            arr[start]=n;
            start++;

           }
           else{
            start--;
            printf("%d\n",arr[start]);

           }



        }
        return 0;

}