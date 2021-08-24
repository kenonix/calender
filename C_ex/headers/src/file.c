#include "../main.h"

typedef struct __file_fomat{
  int type;
  int importance;
  int start_day;
  int end_day;
  char contant[0];
}file_fomat;

int file_write(file_fomat a){
  FILE * data_file;
  data_file = fopen("data.xc","wb");
  
}
