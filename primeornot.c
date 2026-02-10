#include<stdio.h>
int isprime(int n);
int main(void){
    int n;
    printf("Enter n value");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   
    for(i=0;i<n;i++){
        if(isprime(a[i])==0){
            printf("%d ",a[i]);
        }
    }
}
int isprime(int n){
    int count =0;
 
    
    for(int i=1;i<=n;i++)
        if(n%i==0)
            count++;
        
        if(count>2)
            return 1;
        else
            return 0;
}
