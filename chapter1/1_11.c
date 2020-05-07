#include<stdio.h>

int main(){
    int c, r, m, n;
    n = 10;
    m = 16;

    c = 2*n - m/2;
    r = m/2 - n;

    if (m%2==1||c<0||r<0)
    {
        printf("No answer!");
    }
    else
    {
        printf("%d %d\n",c ,r);
    }
    
    return 0;
    

}
