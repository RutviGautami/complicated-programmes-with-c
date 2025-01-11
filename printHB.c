#include <stdio.h>
void p(int n,int j,int i){
    if(j==0){
                printf("* ");
            }
            else if(i<=n/4){
                if(j==i+1){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            else if(i<=n/2){
                if(j==i-1){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            else{
                printf("  ");
            }
}
void main(){
    int i,j,k,n=5;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==0||j==n-1||(i==n/2&&j==2)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("  ");
        for(j=0;j<2*n;j++){
            if(j==n-i-1||j==n+i-1||(i==2&&j==4)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(j=0;j<=3;j++){
            p(n,j,i);
        }
         for(j=0;j<=3;j++){
            p(n,j,i);
        }
         for(k=0;k<n;k++){
            if(i<3){
                if(k==n-i-1||k==i){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            else if(i>=3){
                  if(k==2){
                    printf("*");
                }
                else{
                    printf(" ");
                }
        }
    }
        printf("\n");
    } 
    printf("\n"); 
    // birthday
    for(i=0;i<n;i++){
       for(j=0;j<3;j++){
            if(j==0){
                printf("* ");
            }
            else if(i<=n/4){
                if(j==i+1){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            else if(i<=n/2){
                if(j==i-1){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            else{
                 if(j==n-i){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf(" ");
         for(j=0;j<n;j++){
            if(j==2||(i==0&&j==0)||(i==0&&j==4)||(i==4&&j==0)||(i==4&&j==4)){
                printf("*");
            }
            else{
                printf(" ");
            }
         }
         printf("  ");
          for(j=0;j<3;j++){
            if(j==0){
                printf("* ");
            }
            else if(i<=n/4){
                if(j==i+1){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            else if(i<=n/2){
                if(j==i-1){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            else{
                 if(j==2){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
         printf(" ");
         for(j=0;j<n;j++){
            if(j==2||(i==0&&j==0)||(i==0&&j==4)){
                printf("*");
            }
            else{
                printf(" ");
            }
         }
         printf("  ");
         for(j=0;j<n;j++){
            if(j==0||j==n-1||(i==n/2&&j==2)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("  ");
        for(j=0;j<3;j++){
            if(j==0||(j==2&&i==2)){
                printf("* ");
            }
            else if(i<=n/2){
                if(j==i+1){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            else{
                 if(j==n-i){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf(" ");
        for(j=0;j<2*n;j++){
            if(j==n-i-1||j==n+i-1||(i==2&&j==4)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(k=0;k<n;k++){
            if(i<3){
                if(k==n-i-1||k==i){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            else if(i>=3){
                  if(k==2){
                    printf("*");
                }
                else{
                    printf(" ");
                }
        }
    }
        printf("\n");
    }
}  
