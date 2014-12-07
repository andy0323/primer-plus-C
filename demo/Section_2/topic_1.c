#include <stdio.h>

/**
 *  printf打印测试
 */
int main(void) 
{
  char *first_name = "Andy";
  char *last_name = "Jin";

  printf("%s %s\n", first_name, last_name);
  printf("%s\n", first_name);
  printf("%s\n", last_name);
  printf("%s %s\n", first_name, last_name);

  return 0;
}
