#include <stdio.h>
 
#define _U  unsigned
 
#define NUM_OF_PACKAGES_MAX 100000
#define NUM_OF_TRUCKS_MAX   100000
 
int main(void)
{    
    _U int      loop_cnt_1          = 0;
    _U int      loop_cnt_2          = 0;
    _U int      num_of_packages     = 0;
    _U int      num_of_trucks       = 0;
    _U int      max_load            = 0;
     
    _U short    packages_weight[NUM_OF_PACKAGES_MAX]    = {};
     
    _U short    ref_packages_weight = 0;
    _U int      sum_weight          = 0;
     
    _U int      trucks_load[NUM_OF_TRUCKS_MAX]          = {};
    _U int      total_load_weight   = 0;
 
    scanf("%d %d", &num_of_packages, &num_of_trucks);
     
    for(loop_cnt_1 = 0; loop_cnt_1 < num_of_packages; loop_cnt_1++){
         
        scanf("%d", &packages_weight[loop_cnt_1]);
        sum_weight += packages_weight[loop_cnt_1];
        
    }
     
    ref_packages_weight = (sum_weight / num_of_trucks) + 1;
    
    //printf("ref = %d\n\n", ref_packages_weight);
    
    loop_cnt_1 = 0; 
    while(loop_cnt_1 < num_of_trucks){
         
        while(loop_cnt_2 < num_of_packages){

            if(ref_packages_weight < (trucks_load[loop_cnt_1] + packages_weight[loop_cnt_2])){
                /* 
                if((ref_packages_weight - trucks_load[loop_cnt_1]) > ((trucks_load[loop_cnt_1] + packages_weight[loop_cnt_2]) - ref_packages_weight)){
                    printf("%d ", packages_weight[loop_cnt_2]); 
                    trucks_load[loop_cnt_1] += packages_weight[loop_cnt_2];
                    loop_cnt_2++;
                    break;
                     
                }else{
                     
                    break;
                     
                }*/
                break;
            }

                 
            trucks_load[loop_cnt_1] += packages_weight[loop_cnt_2];

            //printf("%d ", packages_weight[loop_cnt_2]); 
            
            loop_cnt_2++;
        }
         
        if(max_load < trucks_load[loop_cnt_1]){
            
            max_load = trucks_load[loop_cnt_1];
            
        }
        
        total_load_weight += trucks_load[loop_cnt_1];
        
        //printf("\nload = %d\n", trucks_load[loop_cnt_1]);
        
        if(loop_cnt_1 == (num_of_trucks - 1)){
            
            if(total_load_weight != sum_weight){
                //printf("total %d sum %d reload\n\n", total_load_weight, sum_weight);
                ref_packages_weight++;
                //printf("ref = %d\n", ref_packages_weight);
                for(loop_cnt_1 = 0; loop_cnt_1 < num_of_trucks; loop_cnt_1++){
                    trucks_load[loop_cnt_1] = 0;
                }
                total_load_weight = 0;
                loop_cnt_1 = 0;
                loop_cnt_2 = 0;
            
            }else{
                
                loop_cnt_1++;
                
            }
            
        }else{
            
            loop_cnt_1++;
            
        }
    }
     
    printf("%d\n", max_load);
     
    return 0;
}
