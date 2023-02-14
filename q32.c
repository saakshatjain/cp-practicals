#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 20
#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100

typedef struct {
    int street_no;
    char city[MAX_ADDRESS_LENGTH];
    char district[MAX_ADDRESS_LENGTH];
    char state[MAX_ADDRESS_LENGTH];
} Address;

typedef struct {
    char name[MAX_NAME_LENGTH];
    int mobile;
    int age;
    char degree[MAX_NAME_LENGTH];
    float experience;
    Address address;
} Employee;

int main() {
    Employee employees[MAX_EMPLOYEES];
    int num_employees = 0; 
    int option;
    int mobile_num;

    do {
        printf("1. Add employee details\n");
        printf("2. Retrieve employee details by mobile number\n");
        printf("3. Exit\n");
        scanf("%d", &option);

        switch (option) {
            case 1: 
                printf("\nEnter employee name: ");
                scanf("%s", employees[num_employees].name);

                printf("\nEnter employee mobile number: ");
                scanf("%d", &employees[num_employees].mobile);

                printf("\nEnter employee age: ");
                scanf("%d", &employees[num_employees].age);

                printf("\nEnter employee degree: ");
                scanf("%s", employees[num_employees].degree);

                printf("\nEnter employee experience: ");
                scanf("%f", &employees[num_employees].experience);

                printf("\nEnter employee street number: ");
                scanf("%d", &employees[num_employees].address.street_no);

                printf("\nEnter employee city: ");
                scanf("%s", employees[num_employees].address.city);

                printf("\nEnter employee district: ");
                scanf("%s", employees[num_employees].address.district);

                printf("\nEnter employee state: ");
                scanf("%s", employees[num_employees].address.state);

                num_employees++;
                continue;

            case 2: 
                printf("\nEnter mobile number to search: ");
                scanf("%d", &mobile_num);

                int i;
                for (i = 0; i < num_employees; i++) {
                    if (employees[i].mobile == mobile_num) {
                        printf("\nEmployee Name: %s\n", employees[i].name);
                        printf("Employee Mobile: %d\n", employees[i].mobile);
                        printf("Employee Age: %d\n", employees[i].age);
                        printf("Employee Degree: %s\n", employees[i].degree);
                        printf("Employee Experience: %f\n", employees[i].experience);
                        printf("Employee Address:\n");
                        printf("Street No: %d\n", employees[i].address.street_no);
                        printf("City: %s\n", employees[i].address.city);
                        printf("district %s\n",employees[i].address.district);
                        printf("state %s\n",employees[i].address.state);
                    }
                    continue;
                }
               
        }
        }
        while (option!=3);
    return 0; 
    }
