#include<stdio.h>

int main(){
	int m,n;
	int arr[100][100];
	printf("Moi ban nhap vao so dong: \t");
	scanf("%d",&m);
	printf("\nMoi ban nhap vao so cot: \t");
	scanf("%d",&n);
	
	for(int i=0;i<m;i++){
	  	for(int j=0;j<n;j++){
	  		printf("Moi ban nhap phan tu arr[%d][%d]\t",i,j);
	  		scanf("%d",&arr[i][j]);
		  }
	}
	
	for(int i=0;i<m;i++){
		for(int k=0;k<n-1;k++){
			for(int j=0;j<n-k-1;j++){
			if(arr[i][j]>arr[i][j+1]){
				int temp=arr[i][j];
				arr[i][j]=arr[i][j+1];
				arr[i][j+1]=temp;
			}
		}
	}
}
	for(int i=0;i<m;i++){
		for(int j=0; j<n;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
}
	return 0;
}
