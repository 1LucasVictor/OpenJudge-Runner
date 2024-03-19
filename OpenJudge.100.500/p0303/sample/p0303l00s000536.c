#include<stdio.h>
	
int n,k,max=0;
int array[100000];

int main(void){
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&array[i]);
	if(array[i]>max) max=array[i];
	}
	int left=0,right=1000000000;
	while(right-left>1){
		int mid=(left+right)/2;
		if(look(mid))right=mid;
		else left=mid;
	}
	printf("%d\n",right);
	return 0;
}

int look(int m){
    int i;
    int count=1,point=m;
    if(m<max) return 0;
    for(i=0;i<n;i++){
        if(point>=array[i]){
           point-=array[i];
        }else{
            count++;
            point=m-array[i];
        }
    }
    if(count>k) return 0;
    else return 1;
}
