#include <stdio.h>

void bubbleSort(double array[], int n) {
    for (int i = 0; i < n - 1; i++) {         // จำนวนรอบ
        for (int j = 0; j < n - i - 1; j++) { // เทียบทีละคู่
            if (array[j] > array[j + 1]) {
                // สลับค่า
                double bignum = array[j];
                array[j] = array[j + 1];
                array[j + 1] = bignum;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    double array[n];
    for (int i=0;i<n;i++){
        scanf("%lf",&array[i]);
    }

    bubbleSort(array,n);

    for (int i=0;i<n;i++){
        printf("%.2lf ",array[i]);
    }
    return 0;
}