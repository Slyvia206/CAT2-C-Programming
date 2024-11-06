/*SLYVIA NJERI MURIITHI

CT102/G/22110/24

*/

#include<stdio.h> // scanf() ,printf()

#include<string.h> // strcpy ()

struct employee {

char name[25];

int id;

char department[20];

float salary;

char email[50];

} ;

int main() {

struct employee employee1;

strcpy(employee1.name, "John Doe");

employee1.id = 12345 ;

strcpy(employee1.department,"Human Resources");

employee1.salary =  55000.50 ;

strcpy(employee1.email , "john.doe@company.com");



printf("\nname : %s" , employee1.name);

printf("\nid : %d", employee1.id);

printf("\ndepartment : %s" , employee1.department);

printf("\nsalary : %f", employee1.salary);

printf("\nemail : %s", employee1.email);



return 0;

}






















