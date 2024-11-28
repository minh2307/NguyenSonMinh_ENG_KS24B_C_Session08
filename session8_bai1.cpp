#include <stdio.h>

int main(){
	int a[2][5] ={{2,3,56,7,43},{45,23,67,4,7}};
	for(int i=0 ; i < sizeof(a)/sizeof(a[0]); i++){
		for(int f=0; f < sizeof(a[i])/sizeof(int); f++){
			printf("a[%d][%d] = %d \n",i,f,a[i][f]);
		}
			
	}
	
return 0;
}

