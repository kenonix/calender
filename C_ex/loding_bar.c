#include "headers/main.h"
int loding_bar (int steps, int * step_flag){
    int start_loding = 0;
    int i=0;
    for(start_loding = 0; start_loding != steps;){
        if (*step_flag == 1){
            step_flag = 0;
            start_loding ++;
        }
        printf("loding[");
        for(i=0; i<start_loding; i++) printf("=");
        printf("] %d%%\r");

    }

}