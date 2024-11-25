#include <stdio.h>
int main(){
	int n,sum;
	printf("nhap so n : ");
	scanf("%d",&n,&sum);
	for(int i=1;i<=10;i++){
		sum=n*i;
		printf("%dx%d=%d \n",n,i,sum);
	}
	
	return 0;
}
