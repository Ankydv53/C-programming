// Program: College Timetable Management System
// Concept: Nested switch statement
// Author: Ankit Yadav
// Date: 27-07-2026
#include<stdio.h>
int main()
{
    int Day;
    int Year;

    printf("Enter Day (1-7): ");
    scanf("%d", &Day);

    printf("Enter year of bsc (1-3): ");
    scanf("%d", &Year);

    switch (Day)
    {
        case 1:
            printf("Monday\nsubjects: \n");

            switch (Year)
            {
                case 1:
                    printf("1.Fundamental of C\n2.Fundamental of Computer\n3.Fundamental of Linux");
                    break;
                case 2:
                    printf("1.Data Structures\n2.Database Management System\n3.Computer Networks");
                    break;
                case 3:
                    printf("1.Ethical Hacking\n2.Digital Forensics\n3.Cloud Security");
                    break;
                default:
                    printf("Invalid year of B.sc\n");
            }
            break;



        case 2:
            printf("Tuesday\nsubjects: \n");

            switch (Year)
            {
                case 1:
                    printf("1.Fundamental of C\n2.E.V.S\n3.Mathematics");
                    break;
                case 2:
                    printf("1.Operating System\n2.Object-Oriented Programming\n3.Database Management System");
                    break;
                case 3:
                    printf("1.Cloud Security\n2.Cyber Threat Intelligence\n3.Penetration Testing");
                    break;
                default:
                    printf("Invalid year of B.sc\n");
            }
            break;



        case 3:
            printf("Wednesday\nsubjects: \n");

            switch (Year)
            {
                case 1:
                    printf("1.Fundamental of C\n2.Electrical\n3.Fundamental of Computer");
                    break;
                case 2:
                    printf("1.Computer Networks\n2.Web Technologies\n3.Python Programming");
                    break;
                case 3:
                    printf("1.Digital Forensics\n2.Incident Response\n3.Malware Analysis");
                    break;
                default:
                    printf("Invalid year of B.sc\n");
            }
            break;



        case 4:
            printf("Thursday\nsubjects: \n");

            switch (Year)
            {
                case 1:
                    printf("1.Fundamental of Linux\n2.Mathematics\n3.E.V.S");
                    break;
                case 2:
                    printf("1.Java Programming\n2.Operating System\n3.Data Structures");
                    break;
                case 3:
                    printf("1.Web Application Security\n2.Network Security\n3.Cloud Security");
                    break;
                default:
                    printf("Invalid year of B.sc\n");
            }
            break;


        case 5:
            printf("Friday\nsubjects: \n");

            switch (Year)
            {
                case 1:
                    printf("1.Electrical\n2.Fundamental of Linux\n3.Fundamental of C");
                    break;
                case 2:
                    printf("1.Database Management System\n2.Web Technologies\n3.Computer Networks");
                    break;
                case 3:
                    printf("1.Cyber Threat Intelligence\n2.Security Operations\n3.Digital Forensics");
                    break;
                default:
                    printf("Invalid year of B.sc\n");
            }
            break;



        case 6:
            printf("Saturday\nsubjects: \n");

            switch (Year)
            {
                case 1:
                    printf("1.Fundamental of Computer\n2.E.V.S\n3.Electrical");
                    break;
                case 2:
                    printf("1.Object-Oriented Programming\n2.Python Programming\n3.Operating System");
                    break;
                case 3:
                    printf("1.Penetration Testing\n2.Ethical Hacking\n3.Security Audit");
                    break;
                default:
                    printf("Invalid year of B.sc\n");
            }
            break;



        case 7:
            printf("Sunday\nHoliday\n");
    	    break;
    	    
        default:
            printf("Enter valid Day\n");
    }

    return 0;
}
