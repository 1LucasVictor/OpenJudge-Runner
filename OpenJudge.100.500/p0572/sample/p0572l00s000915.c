#include<stdio.h>
#include<math.h>


int main(){
    int L,R;
    int L_mag,R_mag;
    int divier = 2019;
    int i,j;
    int first,second;
    first = divier;
    second = divier;
    scanf("%d %d",&L,&R);
    
    for(i = L ; i <= R ; i++){
        if(first > i % divier ){
            second = first;
            first =i % divier;
            
        }else if(second > i % divier){
            second = i % divier;
        }
    }
    printf("%d",first*second);
    
    
    
    return 0;
}
