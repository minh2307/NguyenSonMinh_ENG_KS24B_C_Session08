#include <stdio.h>

int main(){
	int a[3][4] = {{23,45,2,35},{2,35,67,25},{54,18,38,18}},sum;
	for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
		for(int j = 0; j <sizeof(a[i])/sizeof(int); j++){
			sum += a[i][j];
		}
	}
	printf("tong phan tu trong mang la: %d",sum);
	
return 0;
}
