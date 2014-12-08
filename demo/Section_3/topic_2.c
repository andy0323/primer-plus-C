#include <stdio.h>

/**
 *  输入一个小数，输出指数与浮点型数据
 */

int main(void) 
{
  printf("请输入一个小数");

  float float_value;
  scanf("%f", &float_value);

  printf("This input is %e or %f", float_value, float_value);

  return 0;
}
