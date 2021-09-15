#include <stdio.h>

// Partime rate per hour
#define PART_TIME_RATE 2500

char staffNo[25], staffName[25];

// Full time or Parttime Category
char staffCategory[8];

// For the Full Time Category
float monthlyBasicSalary, statutoryDeductions;

// Net Pay After Deductions are made
float netMonthlySalary;

// For part time staff
int numberOfHoursWorked;

// y to Continue
char terminator;

// captures the staff category and then redirects as required
void staffCategoryCapture(int);

void menu(), fullTime(), partTime();

int main()
{
    printf("Welcome to the Fortune Enterprises\n\n");

    printf("Enter the Staff Details Below:\n");

    // The do while statement checks wether the user entered y to Continue
    //  or Any character to terminate the program
    do
    {
        menu();
        printf("\n\nEnter 'y' to continue: ");
        scanf("%c", &terminator);

    } while (terminator == 'y');

    return 0;
}

// This Captures the staff category and then performs the necessary Actions
//  based on wether the staff member is full time or part time
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

// This is the Program Menu and Asks the user to select a staff category
void menu()
{
    int menuIndex;
    printf("Select your Staff Category Below:\n");
    printf("\n1. FullTime");
    printf("\n2. PartTime");
    printf("\n\nStaff Category (1 or 2): ");
    scanf("%d", &menuIndex);

    staffCategoryCapture(menuIndex);
}

// This Performs FullTime User Actions
void fullTime()
{

    printf("Monthly Basic Salary: ");
    scanf("%f", &monthlyBasicSalary);

    printf("Statutory Deductions: ");
    scanf("%f", &statutoryDeductions);

    netMonthlySalary = monthlyBasicSalary - statutoryDeductions;

    printf("\n\nHere is Your Net Pay: %f", netMonthlySalary);
}

// This Performs PartTime User Actions
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
