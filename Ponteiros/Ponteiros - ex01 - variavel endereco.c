#include <stdio.h>
#include <string.h>

int main(void)
{
     int val[5] = {2,4,5,8,10};
     unsigned long int endereco = &val[2];

     scanf("%d", endereco);

     for(int i = 0; i < 5; i++){
        printf("%d, ", val[i]);

     }
    return 0;
}
