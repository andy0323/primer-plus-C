#include <stdio.h>

/**
 *  输入年龄，返回对应的秒数
 */ 

int main() 
{
  long year_s_count = 3.156*10e7;

  printf("请输入你的年龄");

  int age;
  scanf("%d", &age);

  long age_s_count = age * year_s_count;

  printf("%d岁大约%ld秒", age, age_s_count);

  return 0;
}
