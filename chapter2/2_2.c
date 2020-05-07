#include<stdio.h>
#include<math.h>


int main(){

int num;

for (int i = 1; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
    {
        num = 1100*i+j*11;

        if ((sqrt(num)) == (ceil(sqrt(num))))
        {
            printf("%d\n",num);
        }
        
    }
    
}


return 0;

}