#include <stdio.h>

int main()
{
  float water_quark_unit = 3.0*10e-23;

  printf("请输入需要计算的夸克数");

  int water_quark_count;
  scanf("%d", &water_quark_count);

  int water_g = water_quark_count * 950;
  
  long long water_count = water_g / water_quark_unit;

  printf("%d个夸克大约包含%lld个水分子", water_quark_count, water_count);

  return 0;
}
