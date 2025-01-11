#include<stdio.h>
void main(){
    int n,i,j,lower,upper,count=0;
    printf("Enter size,upper and lower");
    scanf("%d %d %d",&n,&lower,&upper);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
         if(0<=i&&i<j&&j<n){
            if(lower<=a[i]+a[j]&&a[i]+a[j]<=upper){
                count++;
            }
         }
        }
    }
    printf("%d",count);
}