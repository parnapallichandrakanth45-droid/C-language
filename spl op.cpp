#include<stdio.h>
int main(){
	float d=5;
	int e=9;
	int *p = &e;
	printf("size of d = %d\n",sizeof(d));
	printf("size of e = %d\n",sizeof(e));
	printf("%s\n",(d>e)?"max is d":"max is e");
	printf("%d : value\n",*p);
	printf("%d : position\n",&p);
}
