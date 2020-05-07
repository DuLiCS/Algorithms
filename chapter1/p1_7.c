#include<stdio.h>

int main(){

    int sales_count = 1;
    int price_per = 95;
    
    printf("%.3f",(price_per*sales_count)>=300?(sales_count*price_per*0.85):(sales_count*price_per));

    return 0;
}