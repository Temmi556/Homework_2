#include <stdio.h>

int main(){
    double Q,M,N;
    printf("Введите объем в квартах: ");
    scanf("%lf",&Q);
    M = Q * 950;
    N = M / 3.0e-23;
    printf("Количество молекул в %.2lf квартах: %.2e\n",Q,N);
}