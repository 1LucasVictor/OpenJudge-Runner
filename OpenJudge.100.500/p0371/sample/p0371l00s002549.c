#include <stdio.h>

int main(void) {
	int arr[100]={0,}, x, i;
    int max, min;
	int sum=0;
	
	scanf("%d", &x);
	for(i=0;i<x;i++)
	  scanf("%d", &arr[i]);
	
		max=arr[0];
		min=arr[0];
		sum=arr[0];
		
	for(i=0; i<x-1; i++)
	{
         if(arr[i]<arr[i+1] && max<arr[i+1])
        max=arr[i+1];
      	
      	 if(arr[i]>arr[i+1] && min>arr[i+1])
      	min=arr[i+1];
      	
      	sum+=arr[i+1];
	}
	
	printf("%d %d %d\n", min, max, sum);
	
	
	return 0;
}