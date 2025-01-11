#include <stdio.h>
void main(){
    int n, track = 1;
    printf("Enter number of train in 24 hrs: ");
    scanf("%d", &n);
    int st[n];
    int et[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter start time of train-%d: ", i + 1);
        scanf("%d", &st[i]);
        printf("Enter end time of train-%d: ", i + 1);
        scanf("%d", &et[i]);
    }
    int max=1;
    for(int j=1;j<n;j++){
        for(int k=1;k<n;k++){
            if(st[j]<st[k]<et[j]){
                track+=1;
            }
            if(max<track){
                max=track;
                track=0;
            }
        }
    }
    printf("track=%d",max);
}