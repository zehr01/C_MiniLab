// Sayı Tahmini Oyunu (5 hakka sahip)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int rastgele_sayi = rand() %50 + 1;
    int haklar = 5;
    int tahmin;

    while (haklar > 0)
    {
        printf("1 ile 50 arasında bir sayı tahmin ediniz.");
        scanf("%d", &tahmin);
        
        if (tahmin > rastgele_sayi){
            printf("Yanlış tahmin ettiniz. Tahmininizi küçültün!\n");
            }
        else if (tahmin < rastgele_sayi){
            printf("Yanlış tahmin ettiniz. Tahmininizi büyütün!\n");
            }
        else {
            printf("Tebrikler, sayıyı doğru tahmin ettiniz!\n");
        }
        
        haklar--;
    }
    printf("Üzgünüm, tüm haklarınızı kullandınız. Kaybettiniz!\n");

return 0;
}
