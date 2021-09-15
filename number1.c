#include <stdio.h>
#include <stdlib.h>

// partime rate per hour
#define PART_TIME_RATE 2500

char staffNo[25], staffName[25];

// full time or parttime
char staffCategory[8];

float monthlyBasicSalary, statutoryDeductions, netMonthlySalary;

// 30% of totalMonthlyPay
float partTImeTax;

// for part time staff
int numberOfHoursWorked;

// Y to Continue
char terminator;

// captures the staff category and then redirects as required
void staffCategoryCapture(int), menu(), fullTime(), partTime();

int main()
{
    printf("Welcome to the Fortune Enterprises\n\n");

    printf("Enter the Staff Details Below:\n");

    do
    {
        menu();
        printf("\n\nEnter 'y' to continue: ");
        scanf("%c", &terminator);

    } while (terminator == 'y');

    return 0;
}

void staffCategoryCapture(int staffCategory)
{

    switch (staffCategory)
    {
    case 1:
        fullTime();
        break;
    case 2:
        partTime();
        break;

    default:
        printf("Please select a staff category (FullTime or PartTime)\n");
    }
}

void menu()
{
    int menuIndex;
    printf("Select your Staff Category Below:\n");
    printf("\n1. FullTime");
    printf("\n2. PartTime");
    printf("\n\nStaff Category: ");
    scanf("%d", &menuIndex);

    staffCategoryCapture(menuIndex);
}

void fullTime()
{

    printf("Monthly Basic Salary: ");
    scanf("%f", &monthlyBasicSalary);

    printf("Statutory Deductions: ");
    scanf("%f", &statutoryDeductions);

    netMonthlySalary = monthlyBasicSalary - statutoryDeductions;
    // details here
    // set any decimals u want e.d %.2f
    printf("\n\nHere is Your Net Pay: %f", netMonthlySalary);
}

void partTime()
{

    printf("Number of Hours Worked: ");
    scanf("%d", &numberOfHoursWorked);

    monthlyBasicSalary = numberOfHoursWorked * PART_TIME_RATE;

    // since 30% is deducted in form of taxes so the remaining 70% is the net Pay
    netMonthlySalary = monthlyBasicSalary * 0.7;

    // details here
    printf("\n\nHere is Your Net Pay: %f", netMonthlySalary);
}
