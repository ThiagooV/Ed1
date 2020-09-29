#include <stdio.h>
#include<stdlib.h>

int ContaGas(float k, float v, float *total);

int main(void)
{
    float kg, valor, total;
    float *p_total;

    p_total = &total;
    kg = 0.0;
    valor = 0.0;

    printf("Qual foi o consumo de gás (kg)? ");
    scanf("%f", &kg);

    printf("Qual o valor por kg? ");
    scanf("%f", &valor);


    switch(ContaGas(kg, valor, p_total)){
        case -1:
            printf("Valor inválido!");
            break;
        case 1:
            printf("Valot total da conta R$%.2f, consumo baixo.\n", total);
            break;
        case 2:
            printf("Valot total da conta R$%.2f, consumo médio.\n", total);
            break;
        case 3:
            printf("Valot total da conta R$%.2f, consumo alto.\n", total);
            break;
    }

    return 0;
}

int ContaGas(float k, float v, float *total){

    float aux = 0.0, x, y, t;
    aux = k * v;
    *total = aux;
    x = 103.18;
    y = 209.16;
    t = 0;

    if(v <= 0){
        t = -1;
    }else if(aux < x){
        t = 1;
    }else if(aux >= x && aux < y){
        t = 2;
    }else if(aux >= y){
        t = 3;
    }
    return t;
}


