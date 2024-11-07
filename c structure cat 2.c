#include<stdio.h>
#include<stdlib.h>
struct employee{
	char name[25];
	char department[20];
	char email[50];
	int id;
	float salary;
}employee;
int main(){
	strcpy(employee.name,"John_Doe");
	strcpy(employee.department,"Human_Resource");
	strcpy(employee.email,"john.doe@company.com");
	employee.id=12345;
	employee.salary=55000.50;
	
	printf("name:%s\n",employee.name);
	printf("department:%s\n",employee.department);
	printf("email:%s\n",employee.email);
	printf("id:%d\n",employee.id);
	printf("salary:%.2f\n",employee.salary);
	return 0;
}