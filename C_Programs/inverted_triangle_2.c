#include<stdio.h>
#include<stdlib.h>

/*

**** 
 ***
  **
   *

*/

int main() {
	int rows = 5;
	for(int i=rows;i>0;i--) {
		for(int j=1;j<rows+1-i;j++) {
			printf(" ");
		}
		for(int k=0;k<i;k++) {
			printf("*");
		}
		printf("\n");
	}	
	return 0;	
}
