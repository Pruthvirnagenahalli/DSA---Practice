

#include <stdio.h>
#include <strig.h>

struct Employee {
    char name[10];
    int emp_id;
    float salary;
};

void main (){
    struct Employee e1;
    struct Employee e2;

    strcpy(e1.name, "Ram");
    e1.emp_id = 1;
    e1.salary = 10000;

    printf("%s\n", e1.name);
    print("%d\n", e1.epm_id);
    printf("%f\n", e1.salary);
}