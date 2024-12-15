// Basit Hesap Makinesi
#include <stdio.h>

int main() {
  char operator;
  float num1, num2, result;

  printf("Toplama (+), çıkarma (-), çarpma (*) veya bölme (/) için bir operatör giriniz: ");
  scanf(" %c", &operator);

  printf("Birinci sayıyı giriniz: ");
  scanf("%f", &num1);

  printf("İkinci sayıyı giriniz: ");
  scanf("%f", &num2);

  switch (operator) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      if (num2 == 0) {
        printf("Sıfıra bölme hatası!\n");
        return 1;
      }
      result = num1 / num2;
      break;
    default:
      printf("Geçersiz operatör!\n");
  }

  printf("Sonuç: %f\n", result);

  return 0;
}

