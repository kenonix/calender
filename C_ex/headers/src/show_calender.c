#include "..\main.h"
#include "..\cal_math.h"
#define File_open_error 0x8001
#define default_calender 0 // 0 = gregrian // 1 = julian

int show_calender(const int year, const int month, const int day){
  int i = 0;
  int j = 0;
  int first_day_of_month = 0;

  FILE * check_calender_types;
  if ((check_calender_types = fopen("calender_setting.bin","rb")) == NULL){
    printf("파일 열기 에러\n");
    printf("ERROR code: %d",File_open_error);
    return File_open_error;
  }
  
  printf("year: %4d \n" ,year);
  printf("month: %2d",month);
  printf("| sun | mon | tue | wed | thu | fri | sat |");
  printf("-------------------------------------------");
  first_day_of_month = default_calender == 0? 
    first_day_of_month_gregrian(year, month, day):
    first_day_of_month_julian(year, month, day);
  int check_month_day = 0; //그 월에 일이 얼마나 있는지 표시하는 변수
  if(month == 2)check_month_day = check_yun_year(year)+29; //만약 2월이라면 윤년을 계산하여 넣는다
  else if(month <= 7){//7월보다 밑일때 패턴은 홀수 31 짝수 30
    switch(month&0x1){//패턴 표현하기
      case 0: //짝수
        check_month_day = 30;
        break;
      case 1:
        check_month_day = 31;
        break;
    }
  }
  else if(month >=8){
    switch(month&0x1){
      case 0:
        check_month_day = 31;
        break;
      case 1:
        check_month_day = 30;
        break;
    }
  }

  for (i = 1;check_month_day; i++){
    for (j = 1; j <= 7; j++){
        
    }
  }
  
}
