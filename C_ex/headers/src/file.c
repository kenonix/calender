#include "../main.h"
#include "../error.h"

typedef struct __file_fomat{
  int type;
  int importance;
  int start_day;
  int end_day;
  int contant_langth;
  char contant[0];
}file_fomat;

int file_write(file_fomat *data){
  FILE * data_file;
  data_file = fopen("data.xc","wb");
  fwrite(data, sizeof(*data), 1, data_file);
  fclose(data_file);
  return 0;
}

int flie_read(file_fomat *data){
  FILE * data_file;
  data_file = fopen("data.xc","rb");
  if(data_file == NULL){
    printf("파일 열기 에러\n");
    printf("ERROR code : %d\n",File_open_error);
    return File_open_error;
  }
  data = malloc(sizeof(data));
  file_fomat *read_data;
  fread(read_data,sizeof(data),1,data_file);
  return 0;
}
