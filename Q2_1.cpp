//1171100781 Faretz Emir Imran bin Rizal Imran
//1171101849 Pang Jie Xin 

#include <iostream>
#include <stdio.h>
#include <sstream>
using namespace std;

class Student{
private:
    int age;
    string first_name;
    string last_name;
    int standard;

public:
    Student(){};
    Student(int AGE, string fname, string lname, int strd){age = AGE; first_name = fname; last_name = lname; standard = strd;}
    int get_age();
    void set_age(int AGE);
    string get_first_name();
    void set_first_name(string fname);
    string get_last_name();
    void set_last_name(string lname);
    int get_standard();
    void set_standard(int stdrd);
    string tostring();

};

int Student::get_age(){
    return age;
}

void Student::set_age(int AGE){
    age = AGE;
}

string Student::get_first_name(){
    return first_name;
}

void Student::set_first_name(string fname){
    first_name = fname;
}

string Student::get_last_name(){
    return last_name;
}

void Student::set_last_name(string lname){
    last_name = lname;
}

int Student::get_standard(){
    return standard;
}

void Student::set_standard(int strd){
    standard = strd;
}

string Student::tostring(){
    stringstream ss;
    string result;
    string str1 = to_string(age);
    ss << str1;
    ss << ",";
    ss << last_name;
    ss << ",";
    ss << first_name;
    ss << ",";
    string str2 = to_string(standard);
    ss << str2;

    ss >> result;
    return result;
}

int main(){

    int age, standard;
    string first_name, last_name;
    
    cout << "Please input age, first name, last name and standard." << endl;
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << endl;
    cout << "Student Info:" << endl;
    cout << "Age: " << st.get_age() << "\n";
    cout << "Name: " << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << "Standard: " << st.get_standard() << "\n";
    cout << "\n";
    cout << st.tostring() << endl;

    return 0;

}