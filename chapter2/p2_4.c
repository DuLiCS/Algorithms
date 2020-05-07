#include<stdio.h>


int main(){


int n = 5;
int num_space = 0;
for (int i = 0; i <= n; i++)
{
    for (int k = 0; k < num_space; k++)
        {
            printf(" ");        
        }
    for (int j = 0; j < -2*i+11; j++)
    {
        
        
            printf("%s","*");

    }
    for (int k = 0; k < num_space; k++)
        {
            printf(" ");        
        }

    num_space++;


    printf("\n");
    
    
}


return 0;




}


