//4444444
//4333334
//4322234
//4321234
//4322234
//4333334
//4444444
#include<stdio.h>
void main(){
    int a[7][7],i=0,j=0;
    for(i=0;i<7;i++){
      for(j=0;j<7;j++){
        if(j==0||j==6||i==0||i==6){
            a[i][j]=4;
        }
        else if(j==1||j==5||i==1||i==5){
            a[i][j]=3;
        }
        else if(j==2||j==4||i==2||i==4){
            a[i][j]=2;
        }
        else {
            a[i][j]=1;
        }
      }
    }
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
