#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jose, carlos;
    int jose_poup = 800, carlos_poup = 3000;
    int anos, meses;

    jose = 50000;
    carlos = 25000;
    anos = meses = 0;
    while(carlos < jose){

        jose += jose_poup;

        carlos += carlos_poup;

        meses++;
        if(meses%12 == 0){
        anos++;
        }
    }

   printf("%d", anos);
    return 0;
}
