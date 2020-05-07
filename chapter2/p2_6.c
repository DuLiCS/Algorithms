#include<stdio.h>




double func1(double n){

    return n == 1.0?1.0:func1(n-1.0)+1.0/n;
}

int main(){

    int n = 3;

    double sum = 0.0;

    for (double i = 1; i <= n; i++)
    {
        sum += 1/i;
    }
    
    printf("%.3f\n",sum);

    
    
    
    double a = func1(3.0);

    printf("%.3f",a);
    
    
    
    return 0;




    

}

