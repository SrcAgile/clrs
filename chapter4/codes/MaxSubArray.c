#include <stdio.h>
int temp;
void convert(int *arr){
	for(int i=0;arr[i]!='\0';i++){
		if(i==0) arr[0]=0;
		else arr[i] -=temp; 
	    temp = arr[i];
	}
}
void printarr(int *a){
	for(int i =0;a[i]!='\0';i++)
		printf("index[%d]:   %d",i,a[i]);
}
int main(){
	int arr[10] ={1,2,3,4,5,6,7,8,9};
	convert(arr);
	printarr(arr);
	return 0;
}
