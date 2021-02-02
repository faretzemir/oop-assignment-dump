//1171101849 Pang Jie Xin 
//1171100781 Faretz Emir Imran bin Rizal Imran

#include <iostream>
#include <stdio.h>
using namespace std;

class ComplexNum{
	float m_Real; float m_Img;

public:
	ComplexNum(){};
  ComplexNum(float Real, float Img);
  friend ComplexNum operator*(const ComplexNum& obj1, const ComplexNum& obj2);
  friend ostream& operator<<(ostream& output, const ComplexNum& obj);
};

ComplexNum::ComplexNum(float real, float imaginary){

  m_Real = real;
  m_Img = imaginary;

}

ostream& operator<<(ostream& output, const ComplexNum& obj){
  
    output << obj.m_Real << "+" << obj.m_Img << "i";
    return output;

};

ComplexNum operator*(const ComplexNum& obj1, const ComplexNum& obj2){
    
    ComplexNum obj3;
    obj3.m_Real = (obj1.m_Real*obj2.m_Real)-(obj1.m_Img*obj2.m_Img);
    obj3.m_Img = (obj1.m_Real*obj2.m_Img)+(obj1.m_Img*obj2.m_Real);
    return obj3;

};

int main(){
	ComplexNum obj1(10.5, 20.8);
	ComplexNum obj2(31.8, 23.6);
	
	cout<< "Complex Num 1: " << obj1 << endl;
	cout<< "Complex Num 2: " << obj2 << endl;

	ComplexNum obj3;
	obj3 = obj1 * obj2;
	cout << endl << "Complex Num 1 × Complex Num 2 = ";
	cout << obj3 << endl;
	return 0;
}
