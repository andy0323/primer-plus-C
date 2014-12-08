#include <stdio.h>

/**
 *  输入一个字符, 输出ASCII码
 */
int main(void) 
{
  printf("请输入一个ASCII码");

  char char_ASCII;
  scanf("%c", &char_ASCII);

  printf("%c的ASCII码值为%d", char_ASCII, char_ASCII);

  return 0;
}
