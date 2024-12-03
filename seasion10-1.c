#include <stdio.h>

int main() {
    int arr[7] = {1, 2, 3, 4, 3, 6, 3};
    int n, found = 0;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &n);
    for (int i = 0; i < 7; i++) {
        if (arr[i] == n) {
            printf("Phan tu %d co vi tri tai chi so %d.\n", n, i);
            found = 1;
        }
    }
    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", n);
    }

    return 0;
}

