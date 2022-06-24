#include<stdio.h>

int main(){
	int arr[6] = {2,9,3,8,5};
	int i=0,j=0,temp,m,k,num,flag;
	while(j<5){
		temp = arr[j];
		flag = 0;
		for(i=(j+1);i<6;i++){
			if (temp>arr[i]){
				temp = arr[i];
				k = i;
				flag=1;
			}
		}
		if(flag == 1){
			num = arr[j];
			arr[j] = temp;
			arr[k] = num;
		}
	j +=1;
	}
	printf("\nSorted array in ascending order us ing selection sort is :\n");
	for(m=0;m<6;m++)
		printf("%d\t",arr[m]);
	return 0;
	
}
