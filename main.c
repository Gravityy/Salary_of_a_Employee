#include "stdio.h"
#include "math.h"
#include "conio.h"

int main() {
  float id,hours,salary,salaryph;
  printf("Enter the Employees ID(Max 10 Characters):" );
  scanf("%f", &id );
  printf("Enter the hours that Employees worked:");
  scanf("%f", &hours);
  printf("Enter amount of money that Employees earned per hour:");
  scanf("%f", &salaryph);
  salary = hours*salaryph
  printf("ID=%.2f\nSalary=U$ %.2f", id,salary );
  getch();
  return 0;
}
