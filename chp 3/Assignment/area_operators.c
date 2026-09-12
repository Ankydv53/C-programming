#include<stdio.h>

void Square(float side);
void Circle(float radius);
void Rectangle(float length, float breath);
void Cube(float side);
void Cylinder(float radius, float height);
void Sphere(float radius);
void Traingle(float length, float height);

int main(){
    while(1){
        int choice;
        printf("Choose from following choices:\n");
        printf("1.Area of square\n");
        printf("2.Area of circle\n");
        printf("3.Area of rectangle\n");
        printf("4.Area of cube\n");
        printf("5.Area of cylinder\n");
        printf("6.Area of sphere\n");
        printf("7.Area of traingle\n");
        printf("8.To Exit program\n\n");
        printf("Enter your choice: ");

        scanf("%d",&choice);

        switch(choice){
            case 1:
            float side1;

            printf("---------- Area of Square---------\n\n");
            printf("Enter side: ");
            scanf("%f",&side1);
            Square(side1);

            break;


            case 2:
            float rad1;
            printf("---------- Area of Circle---------\n\n");
            printf("Enter radius: ");
            scanf("%f",&rad1);
            Circle(rad1);

            break;


            case 3:
            printf("---------- Area of Rectangle---------\n\n");
            float len3 , hgt3;
            printf("Enter length: ");
            scanf("%f",&len3);
            printf("Enter height: ");
            scanf("%f",&hgt3);

            Rectangle(len3 , hgt3);
            break;


            case 4:
            printf("---------- Area of Cube---------\n\n");
            printf("Enter side: ");
            float side4;
            scanf("%f",&side4);

            Cube(side4);
            break;


            case 5:
            printf("---------- Area of Cylinder---------\n\n");
            float rad5 , hgt5;
            printf("Enter radius: ");
            scanf("%f",&rad5);
            printf("Enter height: ");
            scanf("%f",&hgt5);

            Cylinder(rad5 , hgt5);
            break;


            case 6:
            printf("---------- Area of Sphere---------\n\n");
            float rad6;
            printf("Enter radius: ");
            scanf("%f",&rad6);

            Sphere(rad6);
            break;


            case 7:
            printf("---------- Area of Traingle---------\n\n");
            float len7 , hgt7;
            printf("Enter base: ");
            scanf("%f",&len7);
            printf("Enter height: ");
            scanf("%f",&hgt7);

            Traingle(len7 , hgt7);
            break;


            case 8:
            printf("Thanks for visiting ..... \n\nExiting program ......");
            return 0;
            
            default:

        }
    }
    return 0;
}


void Square(float side){
    printf("Area of Square is: %.2f\n\n",side * side);
}

void Circle(float radius){
    printf("Area of Circle is: %.2f\n\n",3.14 * radius * radius);
}

void Rectangle(float length, float breath){
    printf("Area of Rectangle is: %.2f\n\n",length * breath);
}

void Cube(float side){
    printf("Area of Cube is: %.2f\n\n",6 * (side * side));
}

void Cylinder(float radius, float height){
    printf("Area of Cylinder is: %.2f\n\n",2 * 3.14 * radius * (radius + height));
}

void Sphere(float radius){
    printf("Area of Sphere is: %.2f\n\n",4* 3.14 * (radius * radius));
}

void Traingle(float length, float height){
    printf("Area of Triangle is: %.2f\n\n",0.5 * (length * height));
}





