//to calculate areas 
#include<stdio.h>

void circle(float radius);

void triangle(float lenth,float height);

void rectangle(float length,float height);

void square(float side);

void cylinder(float radius,float height);

void sphere(float radius);



int main(){
	printf("============================== Welcome to area progrom ==============================");
	while(1){
		printf("\n-----------------------------------------------------------------------------------\n");
		printf("\n\nSelect choice:\n1.Continue to Program\n0.Exit program\n\nEnter your choice: ");
		int ochoice;
		scanf("%d",&ochoice);
		switch(ochoice){
			case 1:
			printf("\n\nSelect choice:\n1.Area of circle\n2.Area of triangle\n3.Area of rectangle\n4.Area of square\n5.Area of cylinder\n6.Area of sphere\n7.Exit program\n\n Enter your choice: ");
			int choice;
			scanf("%d",&choice);
			
			switch(choice){
				case 1:
				float r1;
				printf("Enter radius of circle: ");
				scanf("%f",&r1);
				circle(r1);
				break;
				
				case 2:
				float l2;
				float h2;
				printf("Enter length of triangle: ");
				scanf("%f",&l2);
				printf("Enter height of triangle: ");
				scanf("%f",&h2);
				triangle(l2,h2);
				break;
				
				case 3:
				float l3;
				float h3;
				printf("Enter length of rectangle: ");
				scanf("%f",&l3);
				printf("Enter height of rectangle: ");
				scanf("%f",&h3);
				rectangle(l3,h3);
				break;
				
				case 4:
				float s4;
				printf("Enter side of square: ");
				scanf("%f",&s4);
				square(s4);
				break;
				
				case 5:
				float r5;
				float h5;
				printf("Enter radius of cylinder: ");
				scanf("%f",&r5);
				printf("Enter height of cylinder: ");
				scanf("%f",&h5);
				cylinder(r5,h5);
				break;
				
				case 6:
				float r6;
				printf("Enter radius of sphere: ");
				scanf("%f",&r6);
				sphere(r6);
				break;
				
				case 7:
				printf("\nExiting program......");
				return 0;
				
				default:
				printf("Enter a valid choice");
			}
			break;
			case 0:
			printf("Exiting program......");
			return 0;
			
			default:
			printf("Enter a valid choice");
		
		}
	}
	return 0;
}


void circle(float radius){
	float area = 3.14*radius*radius;
	printf("The area of Circle: %f\n",area);
}


void triangle(float length,float height){
	float area = 0.5*length*height;
	printf("The area of triangle: %f\n",area);
}


void rectangle(float length,float height){
	float area = length*height;
	printf("The area of rectangle: %f\n",area);
}

	
void square(float side){
	float area = side*side;
	printf("The area of square: %f\n",area);
}


void cylinder(float radius,float height){
	float area = 2*3.14*radius*height+2*3.14*radius*radius;
	printf("The area of Cylinder: %f\n",area);
}


void sphere(float radius){
	float area = 4*3.14*radius*radius;
	printf("The area of Sphere: %f\n",area);
}
