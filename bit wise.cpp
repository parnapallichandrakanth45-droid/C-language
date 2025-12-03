#include <stdio.h>
int main(){
	int a;
	printf("a : ");
	scanf("%d",&a);
	int b;
		printf("b : ");
	scanf("%d",&b);
	printf("a & b is %d\n",a&b);//and sets 1 if both are 1
	printf("a | b is %d\n",a|b);//or sets 1 if any one is 1
	printf("a ^ b is %d\n",a^b);//xor sets 1 if both are diff
	printf(" ~ a is %d\n",~a);//not inverses all 
	printf(" ~ b is %d\n",~b);
	int n;
	printf("no.of bits u want to shift : ");
	scanf("%d",&n);
	printf("<<a is %d\n",a<<n);//left shift shifts bit to left
	printf("<<b is %d\n",b<<n);
	printf(">>a is %d\n",n>>a);//right shift shifts bit to right
	printf(">>b is %d\n",n>>b);
	return 0;
}
