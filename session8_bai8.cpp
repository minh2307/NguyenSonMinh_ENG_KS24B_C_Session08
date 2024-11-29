#include <stdio.h>

int main(){
	int m,a[10][10];	
		scanf("%d",&m);
	for(int i=0; i < m ; i++){
		for(int j=0; j < m; j++){
			scanf("%d",&a[i][j]);
		}
	}
	int t=0;
	for(int i=0; i < m; i++){
		for(int j = m-1; j >= 0 ; j--){
			printf("%d ",a[i][j]);
			t+=a[i][j];
		}
	}
	printf("\n%d",t);
}
