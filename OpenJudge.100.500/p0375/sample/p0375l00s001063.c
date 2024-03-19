int main(void){
    int i,a;
    int Num;
    int l;
    
    scanf("%d",&Num);
    
    for(i=1;i<=Num;i++){
        if(i%3==0){
            printf(" %d",i);
            continue;
        }
        a=i;
        while(a!=0){
            if(a%10==3){
                printf(" %d",i);
                break;
            }
            a /= 10;
        }
    }
    printf("\n");
}
