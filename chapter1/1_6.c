#include<stdio.h>

int main(){

    int ori,result;

    ori = 250;
    result = ori/100+ori/10%10*10+ori%100%10*100;
    if (ori/100==0)
    {
        /* code */
    
    
    

    printf("%d\n",result);

    }
    else
    {
    printf("%03d\n",result);
    }
    

    return 0;
}