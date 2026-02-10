#include<stdio.h>

struct student{
    int rno;
    int marks;
    
};
void display(struct student);
int main(void){
    struct student S1;
    S1.rno=143;
    S1.marks=715;
    display(S1);
    return 0;
}
void display(struct student S1){
    printf("%d\n%d\n",S1.rno,S1.marks);
}
