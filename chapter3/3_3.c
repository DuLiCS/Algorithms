#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){


    int n = 20;

    int a[n][n];

    int layer;

    int num = 1;
    
    layer = ceil(n/2.0);

    int flag = 1;

    int count_side = n-1;


    for (int i = 0; i < layer; i++)
    {   if (count_side==0)
        {
            a[(n-1)/2][(n-1)/2] = flag;

            break;
        }
    
        
        for (int j = 0; j < 4; j++)
        {
        
            for (int k=0; k < count_side; k++)
            {
                if (j==0)
                {
                    a[k+i][n-1-i] = flag;
                    flag++; 
                }
                if (j==1)
                {
                    a[n-i-1][n-k-i-1] = flag;
                    flag++;
                }
                if (j==2)
                {
                    a[n-k-i-1][i] = flag;
                    flag++;
                }
                if (j==3)
                {
                    a[i][k+i] = flag;
                    flag++;
                }
     
        }
        }

        count_side -=2;
        
    }
    

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        printf(" %d",a[i][j]);
    }
    
    printf("\n");
}


    return 0;
}