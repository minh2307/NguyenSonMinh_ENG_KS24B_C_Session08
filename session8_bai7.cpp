#include <stdio.h>

int main(){
	int m,a[1000][1000];
		scanf("%d",&m);
	for(int i=0; i < m ; i++){
		for(int j=0; j < m; j++){
			scanf("%d",&a[i][j]);
		}
	}
	int t=0;
	for(int i=0; i < m; i++){
		
			printf("%d ",a[i][i]);
			t+=a[i][i];
	
	}
	printf("\n%d",t);
}
