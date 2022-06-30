
#include <iostream>
using namespace std;
class human {
protected  : 
    string ıd;
    string name;
    string lastName;
public: 
    //metodlar mevcut
    //kurucu fonksiyon
    human(string ıd = "", string name = "", string lastName = "") :ıd(ıd), name(name), lastName(lastName) { }
    string getId() { return ıd; }
    string getName() { return name; }
    string getlastName() { return lastName; }
    void setId(string ıd) { this->ıd = ıd; }
    void setName(string name) { this->name = name; }
    void setLastName(string lastName) { this->lastName = lastName; }
};
class student : public human {
private: 
    //prvate özelliğinden dolayı 
    string studentId;
public :
    student(string studentId ="", string ıd ="", string name="", string lastName="") : studentId(studentId), human(ıd,name ,lastName) {}
    string getStudentId() { return studentId; }
    void setStudentId (string studentId) { this->studentId = studentId; }
};
int main()
{
    //da bize kod sayısında azalma olur ve kod karmaşıklığından bizi kurtarır.
    //Bulunan mevcut sınıfa temel sınıf,yeni sınıfa türetilmiş sınıf denir.
    human ali("2731 ","ali ","wdk ");
    cout << ali.getId() << "" << ali.getName() << "" << ali.getlastName() << endl;
    student std("2141 ", "321321 ", "ayse ", "koc ");
    cout << std.getStudentId() << "" << std.getId() << "" << std.getName() << "" << std.getlastName() << endl;

    return 0;
}