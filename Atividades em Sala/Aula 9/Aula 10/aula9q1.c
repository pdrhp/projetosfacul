#include <stdio.h>
#include <stdlib.h>


void bubblesort(int v[], int n){
	int i,j;
	for(i = 0; i < n-1 ; i++){
		for(j = 0; j < n-i-1;j++){
			if(v[j] > v[j+1] ){
				int temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
			} 
		}
	}
}


int main() {
	
	int v[] = {4,5,2,1,7,5,3,9};
	int i;
	
	bubblesort(v, 8);
		
	for(i = 0; i < 8; i++){
		printf("%d ", v[i]);
	} 
	
	return 0;
}
