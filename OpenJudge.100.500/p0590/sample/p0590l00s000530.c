#include <stdio.h>
#include <stdlib.h>
int diffrence (int arr[],int size,int k){
int i,j;
int diff=k;
for(i=0;i<size;i++){
    for(j=1;j<size;j++){
        if(arr[j]-arr[i]>diff)
            diff=arr[j]-arr[i];

    }
}
return diff;
}
int main(){
int input;
int diff;
int arr[6];
for(int i=0;i<6;i++){
    scanf("%d",&input);
    arr[i]=input;
};
diff=diffrence(arr,6,arr[5]);
if(diff>arr[5])
    printf(":(");
else
    printf("Yay!");
return 0;
}
