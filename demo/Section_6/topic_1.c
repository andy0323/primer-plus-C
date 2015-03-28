#include <stdio.h>

//  创建一个具有26个元素的数组，并且存数26个小写字母，该程序显示该数组内容

#define ARR_SIZE 26

int main()
{
  char _arr[ARR_SIZE];
  
  for(int i = 0; i < ARR_SIZE; i++)
  {
    char c = 'a' + i;
   
    _arr[i] = c;

    printf("%c", c);
  }

  return 0;
}

