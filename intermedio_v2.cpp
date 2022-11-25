#include <iostream.h>

int main() {
  int a, b, c;
  printf("Ingrese el limite inferior: ");
  scanf("%d",&a);
  printf("Ingrese el limite superio: ");
  scanf("%d",&b);
  c = (a + b) / 2;
  if ((c > -12) && (c < 24))
    printf("El punto medio esta en el intervalo <-12,24>");
  else
    printf("El punto medio esta fuera del intervalo <-12,24>");
  return 0;
}