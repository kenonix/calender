#include "../main.h"
int check_yun_year(const int year){
  if ( ( (!(year % 4)) && (!(year % 100)) ) || (!(year%400)) ) return 1;
}
int first_day_of_month_gregrian(const int year, const int month, const int day){
 return (day+(13*(month+1)/5)+(year%100)+((year%100)/4)+((year/100)/4)-(2*(year/100)))%7;
}
int first_day_of_month_julian(const int year, const int month, const int day){
  return (day+(13*(month+1)/5)+(year%100)+((year%100)/4)+5-(year/100))%7;
}
