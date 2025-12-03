#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n==3){
		goto next;
		printf("it is not three\n");
	
	next:
		printf("it is three\n");
	}
	else{
		printf("it is not three\n");
		}
}
