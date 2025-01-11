//Rutvi Gautami
//roll no.=271
//CE-A1-C
//batch-3
#include <stdio.h>
void main(){
    int n,i=0;
    int sum;
    printf("Enter number of rupees: ");
    scanf("%d",&n);
    sum=n;
    while (n>=3) {
        if(n%3!=0){
            i=n/3;
            sum=sum+i;
            n=n/3+n%3;
        }
        
        if (n%3==0){
            i=n/3;
            sum=sum+i;
            n=n/3;
         }
    }
    printf("%d",sum);
}