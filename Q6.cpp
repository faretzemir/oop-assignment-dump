//1171101849 Pang Jie Xin
//1171100781 Faretz Emir Imran bin Rizal Imran

#include <iostream>
#include <stdio.h>
using namespace std;

class IStudent{
    
  public:
  virtual void SetName(string &studentName)=0;
  virtual void SetId(unsigned long studentId)=0;
  virtual void SetMajor(string &studentMajor)=0;
  virtual void PrintDetails()=0;

};

class Undergraduate : public IStudent{

  private:
  string name;
  int id;
  string major;

  public:
  Undergraduate(){};
  virtual void SetName(string &studentName);
  virtual void SetId(unsigned long studentId);
  virtual void SetMajor(string &studentMajor);
  virtual void PrintDetails();

};

void Undergraduate::SetName(string &studentName){

  name = studentName;

}

void Undergraduate::SetId(unsigned long studentId){

  id = studentId;

}

void Undergraduate::SetMajor(string &studentMajor){

  major = studentMajor;

}

void Undergraduate::PrintDetails(){

  cout<<"Name:"<<name<<endl;
  cout<<"ID:"<<id<<endl;
  cout<<"Major:"<<major<<endl;

}



int main(){

  cout<<"Undergraduate Details:-"<<endl;
  IStudent* pStudent = new Undergraduate();
  string name = "Alex Kabrousky";
  pStudent->SetName(name);
  pStudent->SetId(1008090405);
  string major = "Electronics Engineering";
  pStudent->SetMajor(major);
  pStudent->PrintDetails();

  return 0;
}