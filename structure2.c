#include<stdio.h>

struct student{
    int rno;
    int marks;
    
};
void display(struct student *);
int main(void){
    struct student S1;
    S1.rno=143;
    S1.marks=715;
    printf("Marks %d\n", S1.marks);
    display(&S1);
    return 0;
}
void display(struct student *S1){
    S1->marks=S1->marks+10;
    printf("Marks %d\n", S1->marks);
}
