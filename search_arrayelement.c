#include<stdio.h>
#include<string.h>

    
int main(void){
    int i;
    int n,flag=0;
    printf("Enter n value ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int key;
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            flag=1;
            break;
        }
    }
    if(flag == 1){
        printf("Found at index %d",i);
        
    }
    else{
        printf("Not found");
    }
 
    
}
