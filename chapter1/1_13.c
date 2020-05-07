#include<stdio.h>

int main(){
    
    int i = 0;
    int max, min;

    while (1)
    {
        if(i+1<=0)
        {
            max = i;
            min = i + 1;
            break;
        }
        i ++;
    }
    printf("%d %d",max,min);

return 0;
} 