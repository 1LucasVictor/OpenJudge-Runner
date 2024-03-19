#include<stdio.h>

int ckDist(int nums[], int k){
    for(int i=0;i<5;i++){
        for(int z=0;z<5;z++){
            if(abs(nums[i]-nums[z])>k)return 0;
    }    
    }   
    return 1; 
}

int main(){
    int a, b, c, d, e, k;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e , &k);
    int nums[5] = {a,b,c,d,e};
    if(ckDist(nums, k)==1){
        printf("Yay!\n");
    }else{
        printf(":(\n");
    }
    
    return 0;
} 