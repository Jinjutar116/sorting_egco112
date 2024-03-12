// selection sort function module in C
void swap(int *,int *);
void bubblesort (int [], int);
void display(int [], int);
void selectionSort(int [], int);
void insertionSort(int [], int);

void display(int a[],int n) {
    int i;

    for(i = 0; i < n; i++)
        printf("%5d", a[i]);

    printf("\n");
}

void selectionSort(int data[], int lenght) { 
	int i, j, maxIndex; 
    display(data, lenght);
    for (i = 0; i < lenght-1; i++) {
        maxIndex = i;

        for (j = i+1; j < lenght; j++) {
            if (data[j] > data[maxIndex]) maxIndex = j;
        }
        
        if (maxIndex != i) swap(&data[maxIndex], &data[i]);
        else if(i == lenght-2) break;

        display(data, lenght);
        printf("\n");
    }
	display(data, lenght);
} 

void insertion(int a[],int n) {
    int i, j, temp;
    display(a, n);
    for(i = 1; i < n; i++){
        temp = a[i];
        for(j = i-1; j >= 0; j--){
            if(a[j] < temp) a[j+1] = a[j];
            else break;
            display(a,n);
        }
        a[j+1] = temp;
        display(a, n);
        printf("\n");
    }
    printf("\n");
    display(a, n);
}

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
  
}

void bubbleSort(int arr[],int lenght) {
    int i, j;
    int sorted;
    display(arr, lenght);
    for(j = 0; j < lenght-1; j++){
        sorted = 0;
        for(int i = 0; i < lenght-1-j ; i++){
            if(arr[i] < arr[i+1]){
                swap(&arr[i], &arr[i+1]);
                sorted = 1;
                display(arr, lenght);
            }
        }
        printf("\n");
    }
}