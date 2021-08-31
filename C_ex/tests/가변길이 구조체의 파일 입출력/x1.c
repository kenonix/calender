#include <stdio.h>
#include <stdlib.h>

typedef struct a{
int num;
char *pup;
}fid;
fid *fix;
void file_w(fid *data){
  FILE * data_file;
  data_file = fopen ("ddd.x1","wb");
  fwrite(data,sizeof(fid)+sizeof(data->num),1,data_file);
  fclose(data_file);
}
void file_r(fid *data){
	FILE * data_file;
	data_file = fopen ("ddd.xi","rb");
	//fread(
}

int main (){

fix = malloc(sizeof(fid)+sizeof(char)*fix->num);
fix->num = 20;
sprintf(fix->pup,"it's fucking work!");

file_w(fix);
printf("%d %s",fix->num,fix->pup);

}
