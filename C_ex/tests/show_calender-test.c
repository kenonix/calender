#include "../headers/main.h"
#include "../headers/show_calender.h"

int main (){
	int year = 0;
	int month = 0;
	int day = 0;
	scanf("%d %d %d",&year,&month,&day);
  show_calender(year,month,day);
}
//테스트 성공
//이제 달력을 출력하는데 문제는 없다.
//할 일 리스트를 만들고 저장한 뒤 그 리스트를 콘솔에서 보여줄수 있게 수정해야 한다.
