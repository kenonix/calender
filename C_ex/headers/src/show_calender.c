#include <stdlib.h>
#include <stdio.h>
#include "..\cal_math.h"

#define File_open_error 0x8001

int show_calender(const int year, const int month, const int day){
  int i = 0;
  int j = 0;
  int date[5][7]={0};
  FILE * check_calender_types;
  if ((check_calender_types = fopen("calender_setting.bin","rb")) == NULL){
    printf("파일 열기 에러\n");
    printf("ERROR code: %d",File_open_error);
    return File_open_error;
  }
  
  printf("year: %4d \n" ,year);
  printf("month: %2d",month);
  printf("| sun || mon | tue | wed | thu | fri || sat |");
  printf("---------------------------------------------");
  for (i = 0; i < 7; i++){
    first_day_of_month_julian();
  }
  
}
