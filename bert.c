#include<stdio.h>
#include <string.h>

struct emp1
{
    char name[60];
    int age;
    char stat[50];
    float salary;
};

struct emp1 vars[];
int n;
void entry()
{
    printf("How many elements\n");
    scanf("%d",&n);
    vars[n];
    printf("Enter details\n");
    for(int i = 0;i<n;i++)
    {
        printf("Name of employee %d\n",i+1);
        scanf("%s",vars[i].name);
        printf("Age of employee %d\n",i+1);
        scanf("%d",&vars[i].age);
        if(vars[i].age>=60)
        {
            //vars[i].stat = "Retired";
            strcpy(vars[i].stat,"Retired");
        }
        else{
            //vars[i].stat = "Working";
            strcpy(vars[i].stat,"Working");

        }
        printf("Salary of employee %d\n",i+1);
        scanf("%f",&vars[i].salary);

    }

    for(int i = 0;i<n;i++)
    {

        printf("Name: %s\n",vars[i].name);
        printf("Age: %d\n",vars[i].age);
        printf("Status: %s\n",vars[i].stat);
        printf("Salary: %f\n",vars[i].salary);

    }

}
int main()
{
    entry();
    return 0;
}
