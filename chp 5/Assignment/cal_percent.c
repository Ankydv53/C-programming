#include<stdio.h>

float percent(float maths,float chemistry,float physics);
char grade(float percent);

int main(){
    float maths,chemistry,physics;
    printf("Enter marks obtained in  maths: ");
    scanf("%f",&maths);
    printf("Enter marks obtained in  chemitry: ");
    scanf("%f",&chemistry);
    printf("Enter marks obtained in  physics: ");
    scanf("%f",&physics);

    float gradeInP = percent(maths,chemistry,physics);
    
    printf("Percentage: %.2f%\n",gradeInP);
    
    printf("Grade: ");
    grade(gradeInP);

    return 0;

}

float percent(float maths,float chemistry,float physics){
    float total = maths + chemistry + physics;
    float percent = (total/300) * 100;
    return percent;
}

char grade(float percent){
    if(percent <= 100){
        if(percent >= 90.00){
            printf("A+");
        }else if(percent >= 80.00){
            printf("A");
        }else if(percent >= 60.00){
            printf("B");
        }else if(percent >= 35.00){
            printf("c");
        }else{
            printf("fail :( ");
        }
    }else{
        printf("Invalid percentage");
    }
}