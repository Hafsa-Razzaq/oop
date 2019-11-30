#include <string>
#include <iostream>
using namespace std;
class GradeBook {
 private:
    string courseName;
    string instructorName;
#include <string>
class MotorVehicle {
public:
   MotorVehicle( string m, string ft, int y ) {
      setMake( m );
      setFuelType( ft );
      setYearOfManufacture( y );
   };
   void setMake( string m ) {
      make = m;
   }
   void setFuelType( string ft ) {
      fuelType = ft;
   }
   void setYearOfManufacture( int y ) {
      yearOfManufacture = y;
   }
   void setColor( string c ) {
      color = c;
   }
   void setEngineCapacity( int ec ) {
      engineCapacity = ec;
   }
   string getMake() const {
      return make;
   }
   string getFuelType() const {
      return fuelType;
   }
   int getYearOfManufacture() const {
      return yearOfManufacture;
   }
   string getColor() const {
      return color;
   }
 public:
    GradeBook(const string &, const string &);
   int getEngineCapacity() const {
      return engineCapacity;
   }

    // SETTERS
    void setCourseName(const std::string &);
    void setInstructorName(const std::string &);
   void displayCarDetails() const {
      std::cout << "CAR DETAILS" << "\nMake:                " << make<< "\nFuel type:           " << fuelType<< "\nYear of manufacture: " << yearOfManufacture   << "\nColor:               " << color<< "\nEngine capacity:     " << engineCapacity<< std::endl;
   }

    string getCourseName();
    string getInstructorName();
private:

    void displayMessage();
   string make;
   string fuelType;
   int yearOfManufacture;
   string color;
   int engineCapacity;
};
// Constructor
GradeBook::GradeBook(const string &name, const string &instructor) {
    setCourseName(name);
    setInstructorName(instructor);
}

void GradeBook::setCourseName(const std::string &name) { courseName = name; }
void GradeBook::setInstructorName(const std::string &instructor) { instructorName = instructor; }


std::string GradeBook::getCourseName() { return courseName; }
std::string GradeBook::getInstructorName() { return instructorName; }

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() {
    cout << "Welcome to the grade book for: " << getCourseName() << "!\n"<< "This course is presented by: " << getInstructorName()<< std::endl;
}
int main(int argc, const char *argv[]) {
    GradeBook gradeBook1("This is a course", "The Instructor");
    gradeBook1.displayMessage();
    return 0;
}
