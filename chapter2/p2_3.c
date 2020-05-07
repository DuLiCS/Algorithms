#include<stdio.h>

int main(){

    int a = 2;
    int b = 1;
    int c = 3;

    int count = 1;
    int flag_found = 0;
    while (((count*7+c)>=10)&&((count*7+c)<=100))
    {
        if(((count*7+c)%3==a)&&((count*7+c)%5==b)){

            printf("%d",count*7+c);
            flag_found = 1;
            break;
        }

        count += 1;

        

    }


    if (flag_found == 0)
    {
        printf("%s","No answer!");
    }
    

    return 0;
    


}