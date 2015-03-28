#include <stdio.h>

int main()
{
  int a = 'A';
  int b = 'F';
  
  int arr_count = b - a;

  char arr[arr_count];
  for(int i = 0; i < arr_count; i++)
  {
    arr[i] = b - i;
    printf("%s\n", arr);
  }

  return 0;
}
