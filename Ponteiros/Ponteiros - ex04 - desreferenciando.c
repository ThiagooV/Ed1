#include <stdio.h>
#include <string.h>

int main(void)
{

    int val[5] = {2,4,5,8,10};
    int *p_val = val;

    for(int i = 0; i < 5; i++){
        *(p_val+i) = *(p_val+i)-1;

     }
     printf("Subtraindo val:\n");
     for(int i = 0; i < 5; i++){
        printf("%d, ", *(p_val+i));

     }
    return 0;
}

