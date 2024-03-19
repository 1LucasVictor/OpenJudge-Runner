int main(int argc, const char * argv[]) {
    int a,b,answer_in,num=0,t=0;
    int answer[num+1];
    char op[2];
    
    
    while(1){
        scanf("%d %c %d",&a,op,&b);
        
        if(strcmp(op,"?")==0){
            break;
        }
        
        if(strcmp(op,"+")==0){
            answer_in = a + b;
        }else if(strcmp(op,"-")==0){
            answer_in = a - b;
        }else if(strcmp(op,"*")==0){
            answer_in = a * b;
        }else if(strcmp(op,"/")==0){
            answer_in = a / b;
        }
        
        answer[num] = answer_in;
        
        num++;
        
    }
    
    for(;t<num;t++){
        printf("%d\n",answer[t]);
    }
    return 0;
}