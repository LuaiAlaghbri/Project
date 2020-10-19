#include <stdio.h>
#include <stdlib.h>

void CalculateSalaryafterTax();
void CalculateSalaryAfterDeduction();
void CalculateAnnualSalary();
void PrintRetiredEmployeedetails();
void PrintWorkingEmployeedetails();
void PrintAllEmployeedetails();
void Exit();
void display();
int main()
{

    display();
    return 0;
}
void display()
{
    printf("Please Select a choice:\n1.CalculateSalaryafterTax\n2.CalculateSalaryAfterDeduction\n"
           "3.CalculateAnnualSalary\n4.PrintRetiredEmployeedetails\n5.Print WorkingEmployeedetails\n6.PrintAllEmployeedetails\n7.Exit\n");
    int entry;
    scanf("%d",&entry);
    if(entry ==1)
    {
        CalculateSalaryafterTax();
    }
    else if(entry ==2)
    {
        CalculateSalaryAfterDeduction();
    }
    else if(entry ==3)
    {
        CalculateAnnualSalary();
    }
    else if(entry ==4)
    {
        PrintRetiredEmployeedetails();
    }
    else if(entry ==5)
    {
        PrintWorkingEmployeedetails();
    }
    else if(entry ==6)
    {
        PrintAllEmployeedetails();
    }
    else if(entry ==7)
    {
        Exit();
    }

}
void CalculateSalaryafterTax()
{
	if(vars[i].stat="retired")
	printf("tax: %d",&vars[i].salary*5%);
	
	else()
	{
		printf("tax: %d",&vars[i].salary*8%");
	}
}


