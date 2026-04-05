#include <stdio.h>

void bubbleSort(int *arr, int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(*(arr+j) > *(arr+j+1)) {
                int temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}

int main() {
    int data[] = {5, 2, 8, 1};
    bubbleSort(data, 4);
    for(int i=0; i<4; i++) printf("%d ", data[i]);
    return 0;
}