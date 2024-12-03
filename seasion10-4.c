#include <stdio.h>
int main (){
	int arr[5] = {64, 25, 12, 22, 11};
	printf("Mang ban dau:\n ");
    for (int i = 0; i < 5; i++) {
        printf("%d\t ", arr[i]);
    }
	for (int i = 0; i < 5 - 1; i++) {
        int minIndex = i;     
        for (int j = i + 1; j < 5; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
        	int temp;
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }printf("\nMang sau khi sap xep:\n ");
    for (int i = 0; i < 5; i++) {
        printf("%d\t ", arr[i]);
    }
	
	
	return 0;
}
