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
    _U short    ref_offset          = 1;
    _U int      sum_weight          = 0;
     
    _U int      trucks_load[NUM_OF_TRUCKS_MAX]          = {};
    _U short    next_package[NUM_OF_TRUCKS_MAX]         = {};
    _U int      total_load_weight   = 0;
    
    /* get number of packages and trucks */
    scanf("%d %d", &num_of_packages, &num_of_trucks);
    
    /* get packages weight and calculate sum weight */
    for(loop_cnt_1 = 0; loop_cnt_1 < num_of_packages; loop_cnt_1++){
         
        scanf("%d", &packages_weight[loop_cnt_1]);
        sum_weight += packages_weight[loop_cnt_1];
        
    }
     
    /* calculate average trucks load */
    ref_packages_weight = (sum_weight / num_of_trucks) + 1;
    
    //printf("ref = %d\n\n", ref_packages_weight);
    
    loop_cnt_1 = 0; 
    while(loop_cnt_1 < num_of_trucks){
         
        while(loop_cnt_2 < num_of_packages){
             
            /* check over load */
            if(ref_packages_weight < (trucks_load[loop_cnt_1] + packages_weight[loop_cnt_2])){
                 
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
         
        next_package[loop_cnt_1] = loop_cnt_2;
         
        loop_cnt_1++;
         
    }
    
    while(total_load_weight < sum_weight){
        
        //printf("total %d sum %d reload\n\n", total_load_weight, sum_weight);
        ref_packages_weight++;
        
        //printf("ref = %d\n", ref_packages_weight);
        
        loop_cnt_1 = 0; 
        while(loop_cnt_1 < num_of_trucks - 1){
            
            if(ref_packages_weight >= (trucks_load[loop_cnt_1] + packages_weight[next_package[loop_cnt_1]])){
                
                trucks_load[loop_cnt_1] += packages_weight[next_package[loop_cnt_1]];
                trucks_load[loop_cnt_1 + 1] -= packages_weight[next_package[loop_cnt_1]];
                next_package[loop_cnt_1]++;
                
            }
            
            if(max_load < trucks_load[loop_cnt_1]){
             
                max_load = trucks_load[loop_cnt_1];
                 
            }
            
            //printf("\nload = %d\n", trucks_load[loop_cnt_1]);
            
            loop_cnt_1++;
            
        }
        
        if(ref_packages_weight >= (trucks_load[loop_cnt_1] + packages_weight[next_package[loop_cnt_1]])){
            
            trucks_load[loop_cnt_1] += packages_weight[next_package[loop_cnt_1]];
            total_load_weight += packages_weight[next_package[loop_cnt_1]];
            
        }
        
        if(max_load < trucks_load[loop_cnt_1]){
         
            max_load = trucks_load[loop_cnt_1];
             
        }
        
        //printf("\nload = %d\n", trucks_load[loop_cnt_1]);
        
    }
     
    printf("%d\n", max_load);
     
    return 0;
}
