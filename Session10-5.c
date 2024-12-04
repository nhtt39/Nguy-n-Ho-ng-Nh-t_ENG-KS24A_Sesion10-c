#include <stdio.h>

int main(){
	int arr[8]={1,4,6,7,11,14,16,19};
	int item;
	int length = sizeof(arr)/sizeof(arr[0]);
	printf("Moi nhap gia tri can tim kiem:  ");
	scanf("%d", &item);
	int start=0;
	int end = length-1;
	int flag=-1;
	while(start <= end){
		int mid = (start + end) / 2;
		flag=1;
		if(arr[mid]>item){
			end=mid-1;
		
		}else if(arr[mid]<item){
			start=mid+1;
		}else{
			printf("Phan tu %d co vi tri la %d", item, mid);
			break;
		}
		
	}
	if(flag == -1){
		printf("Gia tri ban vua nhap khong hop le");
	}
}
