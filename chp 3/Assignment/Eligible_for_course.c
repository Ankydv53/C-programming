#include<stdio.h>
int main(){
    int maths,physics,chemistry;
    printf("Enter marks obtain in Maths: ");
    scanf("%d",&maths);
    printf("Enter marks obtain in Physics: ");
    scanf("%d",&physics);
    printf("Enter marks obtain in Chemistry: ");
    scanf("%d",&chemistry);

    int total = maths + chemistry + physics;

    if ((maths >= 65 && physics >= 55 && chemistry >= 50 && total >= 190 )|| (maths + physics >= 140)){
        printf("Eligible for course :)");
    }else{
        printf("Not Eligible for course :(");
    }
    return 0;
}   
