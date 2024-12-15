//Fibonacci Dizisi
#include <stdio.h>

void fibonaccidizisi(int sayi) 
{
    int ilk_sayi = 0, ikinci_sayi = 1, toplam;

    printf("%d\t", ilk_sayi);
    printf("%d\t", ikinci_sayi);

    for (int i =2; i < sayi; i++)
    {
        toplam = ilk_sayi + ikinci_sayi;
        ilk_sayi = ikinci_sayi;
        ikinci_sayi = toplam; 
        printf("%d\t", toplam);
    }
    printf("\n");
}

int main() 
{
    int sayi;

    printf("Kaç adet Fibonacci sayısı üretilecek?: ");
    scanf("%d", &sayi);

    printf("\n");
    fibonaccidizisi(sayi);

    return 0;
}
