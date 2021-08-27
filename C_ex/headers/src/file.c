#include "../main.h"
#include "../error.h"

typedef struct __file_fomat{
  int type;
  int importance;
  int start_day;
  int end_day;
  int contant_langth;
  char *contant;
}file_fomat;

int file_write(file_fomat *data){
  FILE * data_file;
  data_file = fopen("data.xc","wb");
  //test code up
  printf("type: %d\n importance: %d\n start_day: %d\n end_day: %d\n contant_langth: %d\n contant: %s\n ",data->type,data->importance,data->start_day,data->end_day,data->contant_langth,data->contant);
  //test code end
  fwrite(data, sizeof(data), 1, data_file);
  fclose(data_file);
  return 0;
}

int file_read(file_fomat *data){
  FILE * data_file;
  data_file = fopen("data.xc","rb");
  if(data_file == NULL){
    printf("파일 열기 에러\n");
    printf("ERROR code : %d\n",File_open_error);
    return File_open_error;
  }
  printf("type: %d\n importance: %d\n start_day: %d\n end_day: %d\n contant_langth: %d\n contant: %s\n ",data->type,data->importance,data->start_day,data->end_day,data->contant_langth,data->contant);
  data = (char)malloc(sizeof(*data));
  fread(data,sizeof(data),1,data_file);
  return 0;
}
