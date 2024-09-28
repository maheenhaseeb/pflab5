#include <stdio.h>
int main()
{
    int num,count = 0;

    printf("enter an integer: ");
    scanf("%d", &num);

    while (num > 0) {
        count = count + (num & 1); 
        num >>= 1;       
    }
    printf("number of 1s in the binary representation is: %d\n",count);

    return 0;

}




