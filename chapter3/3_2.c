#include<stdio.h>
#include<string.h>


int main(){

    int n = 7;
    int a[n];
    int m = 3;

    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    
    for (int i = 1; i <= m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if((j+1)%i == 0){
                if (a[j]==0)
                {
                    a[j]=j+1;
                }
                else
                {  
                    a[j] = 0;
                }
                
            }

            
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d\n",a[i]);
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i]!=0)
        {
            printf("%d",a[i]);
            /* code */
        }
        
    }
    
    return 0;
    
}