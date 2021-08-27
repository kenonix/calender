#include "../headers/file.h"
#include "../headers/main.h"

void w(){
  file_fomat d;
  d.type = 1;
  d.importance = 0;
  d.start_day = 0;
  d.end_day = 0;
  d.contant_langth = sizeof("just_test");
  d.contant = malloc(sizeof(file_fomat)+sizeof(char)*(d.contant_langth));
  sprintf((d.contant),"just_test");
  file_write(&d);
  free(d.contant);
}
void r(){
  file_fomat data;
  file_read(&data);
  printf("read data---------------\n");
  printf("type: %d\n importance: %d\n start_day: %d\n end_day: %d\n contant_langth: %d\n contant: %s\n ",data.type,data.importance,data.start_day,data.end_day,data.contant_langth,data.contant);
}
int main (){
  w();
  r();
}
