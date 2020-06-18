//
//  main.c
//  Average
//
//  Created by Carlos Santiago Cruz on 15/06/20.
//  Copyright © 2020 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>

float average(int *array, int size);

int main(int argc, const char * argv[]) {
    int array[3] = {1, 7, 3};
    average(array, 3);
    return 0;
}

float average(int *arrayPointer, int size)
{
 int sum;
 printf("arrayPointer: %u \n", (unsigned int)&arrayPointer);
 printf("size: %u \n", (unsigned int)&size);
 printf("sum: %u \n", (unsigned int)&sum);

 for(int index=0; index<size; index++) {
     sum += arrayPointer[index];
 }
 return (sum * 1.0f) / size;
}

