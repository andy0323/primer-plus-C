#include<stdio.h>

int main(void)
{
  int a = 1;
  int b = 1;
  
  int c;
  int d;

  c = a++;
  d = ++b;

  printf("a=%d\nb=%d\nc=%d\nd=%d", a, b, c, d);

  return 0;
}
