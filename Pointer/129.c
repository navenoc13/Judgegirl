#include <stdio.h>
void prepare_array(int buffer[], int *array[], int row, int column[]){
    int sum=0;
    for(int i=0;i<row;i++){
        array[i] = &(buffer[sum]);
        sum+=column[i];
    }
}
