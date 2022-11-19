#include <stdio.h>

int main()
{
    unsigned int n = 0;
    unsigned int p = 0;
    unsigned long int fatorialNumerador = 0;
    unsigned long int fatorialDenominador = 0;
    unsigned int coeficienteB = 0;

    // Entrada de n e p
    scanf("%d %d", &n, &p);

    if ((p == n) || (p == 0))
    {
        printf("1\n");
    }
    else if (p == 1)
    {
        printf("%d\n", n);
    }
    else
    {

        fatorialNumerador = n;
        for (int i = 1; i < n; i++)
        {
            fatorialNumerador *= (n - i);
        }
        fatorialDenominador = p;
        for (int i = 1; i < p; i++)
        {
            fatorialDenominador *= (p - i);
        }
        fatorialDenominador *= (n - p);
        for (int i = 1; i < (n - p); i++)
        {
            fatorialDenominador *= ((n - p) - i);
        }

        coeficienteB = fatorialNumerador / fatorialDenominador;

        printf("%d\n", coeficienteB);
    }

    return 0;
}