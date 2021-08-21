#include "headers/main.h"

#define setting_list_num 1

struct Binary_setting_list
{
    int calender_type;

}setting_lists;


int file_setting(FILE * setting_file){
    setting_file = foprn("calender_settings.kenonix","wb");
    fwrite(&setting_lists,sizeof(setting_lists),setting_list_num,setting_file);
    
}