#include<stdio.h>

int main(){
	int arr[8] = {1,2,10,5,20,3,5};
	int i,temp,flag;
	do{
		flag = 0;
		for(i=0;i<a-1;i++){
			if(arr[i]>arr[i+1]){
				flag = 1;
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	} while(flag==1);
	printf("\nThe sorted array using bubble sort in ascending order is:\n");
	for(m=0;m<8;m++){
		printf("%d\t", arr[m]);
	}
	return 0;
}
