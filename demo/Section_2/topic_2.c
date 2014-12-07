#include <stdio.h>
#include<math.h>

#define CURRENT_YEAR 2014
#define CURRENT_MONTH 12
#define CURRENT_DAY 8

int main(void)
{
  int year;
  int month;
  int day;
  
  printf("请输入您的生日");
  scanf("%d%d%d", &year, &month, &day);

  int day_count = fabs(year-CURRENT_YEAR)*365 + (fabs(month-CURRENT_MONTH))*30 + fabs(day-CURRENT_DAY);

  printf("您出生于%d年%d月%d日，总计约为%d天",year, month, day, day_count);
  
  return 0;
}
