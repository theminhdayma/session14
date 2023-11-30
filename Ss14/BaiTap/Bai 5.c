#include <stdio.h>

void inputArray(int *arr, int size) {
    printf("Nhap cac phan tu vao mang:\n");
    for (int i=0;i<size;i++){
        printf("arr[%d] = ",i);
        scanf("%d",arr+i);
    }
}
void outputArray(int *arr, int size) {
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < size; i++){
        printf("arr[%d] = %d\n", i, *(arr + i));
    }
}
void bubbleSort(int* arr, int size) {
    int i,j;
    for (i=0;i<size-1;i++){
        for(j=0;j<size-i-1;j++){
            if (*(arr+j)>*(arr+j+1)){
                // Hoan doi hai phan tu
                int temp=*(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=temp;
            }
        }
    }
}

int main(){
    int size;
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d",&size);   
    int numbers[size];
    inputArray(numbers,size);   
    printf("Mang truoc khi sap xep:\n");
    outputArray(numbers,size);   
    bubbleSort(numbers,size);   
    printf("Mang sau khi sap xep tang dan:\n");
    outputArray(numbers,size);
}
