#include <stdio.h>

/// 第一张课后作业第一题， 转换英寸-厘米

int main(void)
{
  // 提示用户
  printf("请输入想转换的英寸数, 转换边标准(1英寸=2.54cm)");
  printf("\n");

  // 输入英寸值
  int inch_value;
  scanf("%d", &inch_value);

  // 检测结果
  float cm_value;
  cm_value = inch_value * 2.54;
  
  // 输出转换结果
  printf("转换结果, %d英寸= %.2f厘米", inch_value, cm_value);

  return 0;
}
