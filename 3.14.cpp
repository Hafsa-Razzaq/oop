#include <iostream>
#include <string>
using namespace std;
class Employee {
 private:
    string firstName;
    string lastName;
    int monthlySalary;
 public:
    Employee(const string &, const string&, int);

    void setFirstName(const string &);
    void setLastName(const string &);
    void setMonthlySalary(int);

    string getFirstName() const;
    string getLastName() const;
    int getMonthlySalary() const;
    int calculateSalary(int) const;
    void giveRaise(int);
    void showEmployee() const;
};

Employee::Employee(const string &fName, const string &lName, int mSalary) {
    setFirstName(fName);
    setLastName(lName);
    setMonthlySalary(mSalary);
}

void Employee::setFirstName(const string &fName) { firstName = fName; }
void Employee::setLastName(const std::string &lName) { lastName = lName; }
void Employee::setMonthlySalary(int mSalary) {
    monthlySalary = (mSalary > 0) ? mSalary : 0;
}

string Employee::getFirstName() const { return firstName; }
string Employee::getLastName() const { return lastName; }
int Employee::getMonthlySalary() const { return monthlySalary; }
int Employee::calculateSalary(int months) const { return (getMonthlySalary() * months); }
void Employee::giveRaise(int percent) {
    monthlySalary += (monthlySalary / 100) * percent;
}
void Employee::showEmployee() const {
    std::cout << "Name: " << getFirstName() << " " << getLastName()<< "\nMonthly Salary: " << getMonthlySalary()<< "\nYearly Salary: " << calculateSalary(12) << std::endl << std::endl;
}

int main(int argc, const char *argv[]) {
    Employee emp1("hafsa", "razzaq", 1200);
    Employee emp2("tahreem", "razzaq", 2000);
    emp1.showEmployee();
    emp2.showEmployee();
    emp1.giveRaise(10);
    emp2.giveRaise(10);
    emp1.showEmployee();
    emp2.showEmployee();
    return 0;
}
