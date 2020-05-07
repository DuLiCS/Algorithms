#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){

    return *(int *)a - *(int *)b;
}

int main(){

    int abc,def,ghi;
    int arr[9];
    

    for ( abc = 100; abc < 334; abc++)
    {
        def = 2 * abc;
        ghi = 3 * abc;

        int d11 , d12 , d13, d21, d22, d23, d31, d32, d33;
        arr[0] = abc/100;
        arr[1] = abc/10%10;
        arr[2] = abc%10;

        arr[3] = def/100;
        arr[4] = def/10%10;
        arr[5] = def%10;

        arr[6] = ghi/100;
        arr[7] = ghi/10%10;
        arr[8] = ghi%10;

        qsort(arr, 9, sizeof(int),cmp);
        int m;
        for (m = 0; m < 9; m++)
        {
            if (arr[m] != m+1)
            {
                break;
            }
            
        }
        
        

        if(m==9)
        {
            printf("%d %d %d\n",abc,def,ghi);
        }

    }
    
    return 0;

}

