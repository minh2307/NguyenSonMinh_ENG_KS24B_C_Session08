#include <stdio.h>

int main(){
	int a[3][3] = {{23,54,6},{2,56,33},{28,94,82}},max;
		max=a[0][0];
	for(int i=0; i < sizeof(a)/sizeof(a[0]); i++){
		for(int f=0; f < sizeof(a[i])/sizeof(int); f++){
			printf("%d ",a[i][f]);
			}
		printf("\n");
		}
	
	
return 0;
}
