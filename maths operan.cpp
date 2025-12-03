#include <stdio.h>
int main() {
int a;
int b;
  printf("a = ");
  scanf("%d",&a);
   printf("b = ");
    scanf("%d",&b);
    int sum=a+b;
    int prod=a*b;
    int quo=a/b;
    int sub=a-b;
int rem=a%b;
     printf("sum of %d and %d = %d\n",a,b,sum);
     printf ("product of%d and %d= %d\n",a,b,prod); 
     printf ("quotient when %d divided by %d = %d\n",a,b,quo); 
     printf ("subtraction of %d from %d = %d\n",b,a,sub);
 printf("remainder when %d divided by %d = %d\n",a,b,rem);
    return 0;
}

