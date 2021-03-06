#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <time.h>

typedef struct student 
{
	char name[20];
	int age;
	double grade;
}student;

void stuPrint(student a[], int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("ÐÕÃû%s\t", a[i].name);
		printf("³É¼¨%d\t", a[i].grade);
		printf("ÄêÁä%d\n", a[i].age);

	}
}

//int main()
//{
//	student stu[15];
//	int length;
//	char str[6];
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 15; i++)
//	{
//		char temp[20] = "a";
//		for (int j = 0; j < 6; j++)
//		{
//			str[j] = (char)rand() % 10;
//	
//		}
//		strcat(temp, str);
//
//		stu[i].age =(int)( rand() % 100 + 1);
//		strcpy(stu[i].name, temp);
//		stu[i].grade = (rand() % 60 + 40);
//	}
//	
//	length = sizeof(stu) / sizeof(stu[0]);
//
//	stuPrint(stu, length);
//
//	
//	return 0;
//}

//int main()
//{
//srand((unsigned int)time(NULL));
//int age;
//student A;
//A.age = rand() % 10;
//age = rand() % 100;
//printf("%d\t%d", age,A.age);
//return 0;
//}


#include<stdio.h>
int main()
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        switch (a)
        {
        case 200:
            printf("OK\n");
            break;
        case 202:
            printf("Accepted\n");
            break;
        case 400:
            printf("Bad Request\n");
            break;
        case 403:
            printf("Forbidden\n");
            break;
        case 404:
            printf("Not Found\n");
            break;
        case 500:
            printf("Internal Server Error\n");
            break;
        case 502:
            printf("Bad Gateway\n");
            break;
        default:
            break;

        }
    }
    return 0;
}