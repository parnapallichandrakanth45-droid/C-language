#include<stdio.h>
int main(){
	int m,n;
	printf("1st no :");
	scanf("%d",&n);
	printf("2nd no :");
	scanf("%d",&m);
	int s=n;
	for(int i=1;i<m;i++){
		s+=n;
	}
	printf("Product is %d",s);
}
