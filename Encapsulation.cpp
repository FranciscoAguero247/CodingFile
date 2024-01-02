#include <iostream>

class Employee{
private:
    int salary;
public:
    void setSalary(int salary){
       this ->salary = salary;
    }
    int getSalary(){
        return salary;
    }
};

int main(){
    Employee workers;
    workers.setSalary(30000);
    std::cout << "Worker's salary: $" << workers.getSalary() <<"\n\n";

    Employee Manager;
    Manager.setSalary(45000);
    std::cout << "Manager's salary; $" << Manager.getSalary() << "\n\n";

    Employee InformatioTechnology;
    InformatioTechnology.setSalary(50000);
    std::cout << "IT salary is: $" << InformatioTechnology.getSalary() << "\n\n";

    Employee Engineer;
    Engineer.setSalary(65000);
    std::cout << "Engineer's salary is: $" << Engineer.getSalary() << "\n\n";

    return 0;
}
