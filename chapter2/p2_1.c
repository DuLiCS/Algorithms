#include<stdio.h>

int main(){

    int n = 127350;

    int digit;
    for (int i = 0; i < 9; i++)
    {
        int num_mod = 1;
        for (int j = 0; j < i; j++)
        {
            num_mod *=10;
        }
        if (n%num_mod == n)
        {
            digit = i;
            break;
        }
        
    }
    
    printf("%d",digit);

    return 0;
}