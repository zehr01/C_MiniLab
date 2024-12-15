// Faktoriyel Hesaplama ("for" döngüsü ile)
#include <stdio.h>

int main()
{
    int sayi = -1, olgu = 1, sayac;
    while (sayi< 0) 
    {
        printf("\nPozitif bir sayı giriniz: ");
        scanf("%d", &sayi);
    }

    for (sayac = 1; sayac <= sayi; sayac++)
    {
        olgu *= sayac;
    }
    printf("\n%d sayısının faktoriyeli = %d\n", sayi, olgu); 
    
    return 0;
}
