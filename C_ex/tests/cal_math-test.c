#include "../headers/main.h"
#include "../headers/cal_math.h"
void check_yoil(int a){
    switch (a)
    {
    case 0:
        printf("토요일");
        break;
    case 1:
        printf("일요일");
       break;
    case 2:
        printf("월요일");
       break;
    case 3:
        printf("화요일");
        break;
    case 4:
        printf("수요일");
        break;
    case 5:
        printf("목요일");
        break;
    case 6:
        printf("금요일");
        break;
 
    default:
        printf("에러 %5d",a);
        break;
    }
}

int main (){
    int year;
    int month;
    int day;
    int g=0, j=0;
    scanf("%d %d %d",&year,&month,&day);
    g = first_day_of_month_gregrian(year,month,day);
    j = first_day_of_month_julian(year,month,day);
    printf("gregrian: ");
    check_yoil(g);
    printf("julian: ");
    check_yoil(j);
    // 확인됨
    // log(2021-08-23)
    // 기본 달력 체계는 그레고리안 달력으로 하되 변경이 가능하게 한다.
}
