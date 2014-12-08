#include <stdio.h>

int main() 
{
  printf("输入身高，单位cm");

  int height;
  scanf("%d", &height);

  float inch = height / 2.54;

  printf("你的身高为%dcm，%f英寸", height, inch);

  return 0;
}
