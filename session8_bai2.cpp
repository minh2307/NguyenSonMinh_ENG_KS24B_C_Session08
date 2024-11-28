#include <stdio.h>

int main(){
	int a[3][5] = {{3,25,26,23,6},{26,47,43,73,46},{25,53,56,34,68}}, n, count;
	  	printf("nhap vao mot phan tu: ");
	  	scanf("%d",&n);
	  	count = 0;
	for(int i = 0; i <sizeof(a)/sizeof(a[0]); i++){
		for(int f = 0; f< sizeof(a[i])/sizeof(int); f++){
			if(n == a[i][f]){
				printf("vi tri phan tu trong mang la a[%d][%d]\n",i,f);
				count++;
			
			}
		}	
	}
		if(count == 0){
			printf("phan tu khong ton tai trong mang.\n");	
	    }
	
return 0;
}
