#include <stdio.h>
void main(){
    int n,track=1;
    printf("Enter number of train in 24 hrs: ");
    scanf("%d",&n);
    int st[n];
    int et[n];
    for(int i=0;i<n;i++){
        printf("Enter start time of train-%d: ",i+1);
        scanf("%d",&st[i]);
        printf("Enter end time of train-%d: ",i+1);
        scanf("%d",&et[i]);
    }
    for(int j=1;j<n;j++){ 
        if(st[j]>st[j-1]){  
       if(st[j]<et[j-1]){
        track+=1;}
        if(j>2){
        if(st[j]>et[j-2]){
        track-=1;
        }
        }
       }
       else{
        if(et[j]>st[j-1]){
            track+=1;
        }
       }
    }
    printf("track=%d",track);
}