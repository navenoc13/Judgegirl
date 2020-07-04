#include "employee.h"
int relation(Employee *employee1, Employee *employee2){
    Employee *one = employee1;
    Employee *two = employee2;
    while(one!=one->boss){
        if (one == employee2)return 1;
        one = one->boss;
    }
    if (one==employee2)return 1;
    while (two!=two->boss){
        if (two == employee1)return 2;
        two = two->boss;
    }
    if (two==employee1)return 2;
    if (one==two)return 3;
    else return 4;
}
