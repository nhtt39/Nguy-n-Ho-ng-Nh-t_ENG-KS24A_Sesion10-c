#include <stdio.h>
int main(){
	int arr[5] = {7,4,8,5,1};
	printf ("mang ban dau la:\n");
	for (int i = 0;i < 5;i++){
    	printf ("%d\t",arr[i]);
    }
	for (int i = 0;i < 5;i++){
		for (int j = 0;j < 5 - i - 1;j++){
			if (arr[j]>arr[j+1]){
				int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }printf ("\nmang sau khi thay doi la:\n");
    for (int i = 0;i < 5;i++){
    	printf ("%d\t",arr[i]);
    }
	
	return 0;
}
