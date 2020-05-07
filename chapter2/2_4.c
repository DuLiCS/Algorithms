#include<stdio.h>

int main(){

    int n = 3;
    int trans_count = 7;

    for (int i = 0; i < trans_count; i++)
    {
        if (n%2==0)
        {
            n /= 2;
        }
        else
        {
            n = 3*n + 1;
        }
        
        
    }
    
    printf("%d\n",n);

    return 0;
    
}