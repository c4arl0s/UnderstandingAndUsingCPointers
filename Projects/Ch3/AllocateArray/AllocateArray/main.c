//
//  main.c
//  AllocateArray
//
//  Created by Carlos Santiago Cruz on 18/06/20.
//  Copyright © 2020 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>

void allocateArray(int **array, int size, int value);

int main(int argc, const char * argv[]) {
    int *vector = NULL;
    allocateArray(&vector, 5, 45);
    printf("%p \n", vector);
    return 0;
}

void allocateArray(int **array, int size, int value) {
    *array = (int *)malloc(size *sizeof(int));
    if(*array != NULL) {
        for(int index=0; index<size; index++) {
            *(*array+index) = value;
        }
    }
}


