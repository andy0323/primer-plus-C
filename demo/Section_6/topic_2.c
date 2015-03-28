#include <stdio.h>

// 输出
// $
// $$
// $$$
// $$$$
// $$$$$
// $$$$$$
// $$$$$$$
// $$$$$$$$

#define CHAT_LENGTH 10

int main()
{
  char arr[CHAT_LENGTH];
  char s = '$';

  for(int i = 0; i < CHAT_LENGTH; i++)
  {
    arr[i] = s;
    printf("%s\n", arr);  
  }

  return 0;
}
