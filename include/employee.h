#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class employee {
public:
    char name[60];
    char id[60];
    double salary;
};

struct employeeData{
int size;
employee* employees;
int noOfEmployees=0;
void copyArr(){
  employee* test = new employee[this->noOfEmployees];
  for(int i=0;i<this->noOfEmployees;i++){
    test[i]=this->employees[i];
  }
  delete[] this->employees;
  this->employees=new employee[this->size*2];
 this->size=this->size*2;
  for (int i=0;i<this->noOfEmployees;i++){
    this->employees[i]=test[i];
  }
  delete[] test;
}
};

#endif