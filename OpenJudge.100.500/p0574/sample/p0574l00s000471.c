
int main() {
    int num1;
    int num2;
    int ans1;
    int ans2=0;
    int count=10;
    int judge=0;
    scanf("%d ", &num1);
    
    for(int i=0;i<=2;i++){
        num2 = num1%count;
        ans1=num2/(count/10);
        num1=num1-num2;
        count=count*10;
        if (i!=0){
            if(ans1==ans2){
                judge=1;
            }
        }
        ans2=ans1;
    }
    
    ans1=num1/1000;
    if(ans1==ans2){
        judge=1;
    }
    
    if(judge==1){
        printf("Bad");
    }else{
        printf("Good");
    }
   return 0;
}