#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int main(int argc, char * argv[]) {
    int i,N = argc - 2;
    int *a;
    a = (int*)malloc(sizeof(int)*(argc-2));

    for(i=2;i<argc;i++){
        a[i-2] = atoi(argv[i]); 
    }
    //printf("\n");

    if(argv[1][0] == 'b'){
      bubbleSort(a,N);
    }

    if(argv[1][0] == 'i'){
      insertion(a,N);
      printf("\n");
    }

    if(argv[1][0] == 's'){
      selectionSort(a,N);
      printf("\n");
    }

    return 0;
}

