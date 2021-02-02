//1171101849 Pang Jie Xin
//1171100781 Faretz Emir Imran bin Rizal Imran

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Package {

protected:
    string sm_name;
    string sm_address;
    string sm_city;
    string sm_state;
    double sm_zipcode;
    string rm_name;
    string rm_address;
    string rm_city;
    string rm_state;
    double rm_zipcode;
    float m_weight;
    float m_cost;

public:
    Package() {};
    Package(string sname, string rname, string saddress, string raddress, string scity, string rcity, string sstate, string rstate, double szipcode, double rzipcode, float weight, float cost);
    void showdetails();
    double CalculateCost();

};

Package::Package(string sname, string rname, string saddress, string raddress, string scity, string rcity, string sstate, string rstate, double szipcode, double rzipcode, float weight, float cost) {

    sm_name = sname;
    sm_address = saddress;
    sm_city = scity;
    sm_state = sstate;
    sm_zipcode = szipcode;
    rm_name = rname;
    rm_address = raddress;
    rm_city = rcity;
    rm_state = rstate;
    rm_zipcode = rzipcode;
    m_weight = weight;
    m_cost = cost;

}

void Package::showdetails() {
    cout << "Normal Package" << endl;
    cout << "Sender" << endl;
    cout << "Name:" << sm_name << endl;
    cout << "Address:" << sm_address << endl;
    cout << "City:" << sm_city << endl;
    cout << "State:" << sm_state << endl;
    cout << "Zip Code:" << sm_zipcode << endl;
    cout << "\n";
    cout << "Recipient" << endl;
    cout << "Name:" << rm_name << endl;
    cout << "Address:" << rm_address << endl;
    cout << "City:" << rm_city << endl;
    cout << "State:" << rm_state << endl;
    cout << "Zip Code:" << rm_zipcode << endl;
    cout << "\n";
    cout << "Package Summary"<< endl;
    cout << "Package weight(ounce):" << m_weight << endl;
    cout << "Cost per ounce:" << m_cost << endl;

}

double Package::CalculateCost() {

    double cost;
    cost = m_weight * m_cost;
    cout << "The cost to ship this package is RM" << cost<<endl;
    return cost;
}

class TwoDayPackage : public Package {
private:
    float m_fee;

public:
    TwoDayPackage(string sname, string rname, string saddress, string raddress, string scity, string rcity, string sstate, string rstate, double szipcode, double rzipcode, float weight, float cost, float fee);
    void showdetails();
    double CalculateCost();
};

TwoDayPackage::TwoDayPackage(string sname, string rname, string saddress, string raddress, string scity, string rcity, string sstate, string rstate, double szipcode, double rzipcode, float weight, float cost, float fee) {

    sm_name = sname;
    sm_address = saddress;
    sm_city = scity;
    sm_state = sstate;
    sm_zipcode = szipcode;
    rm_name = rname;
    rm_address = raddress;
    rm_city = rcity;
    rm_state = rstate;
    rm_zipcode = rzipcode;
    m_weight = weight;
    m_cost = cost;
    m_fee = fee;
}

void TwoDayPackage::showdetails() {
   
    cout << "\n";
    cout << "Overnight Package" << endl;
    cout << "Sender:" << endl;
    cout << "Name:" << sm_name << endl;
    cout << "Address:" << sm_address << endl;
    cout << "City:" << sm_city << endl;
    cout << "State:" << sm_state << endl;
    cout << "Zip Code:" << sm_zipcode << endl;
    cout << "\n";
    cout << "Recipient" << endl;
    cout << "Name:" << rm_name << endl;
    cout << "Address:" << rm_address << endl;
    cout << "City:" << rm_city << endl;
    cout << "State:" << rm_state << endl;
    cout << "Zip Code:" << rm_zipcode << endl;
    cout << "\n";
    cout << "Package Summary"<< endl;
    cout << "Package weight(ounce):" << m_weight << endl;
    cout << "Cost per ounce:" << m_cost << endl;
    cout << "The flat fee charged is RM" << m_fee << endl;

}

double TwoDayPackage::CalculateCost() {

    double cost;
    cost = (m_weight * m_cost) + m_fee;
    cout << "The cost to ship this package is RM" << cost;
    return cost;
}

int main() {

    Package normal("Ahmad", "Tan Chiong Beng", "GT Condominium", "Taman GG", "Pasir Gudang", "Cyberjaya", "Johor", "Selangor", 81700, 63100, 40.50, 34);
    normal.showdetails();
    normal.CalculateCost();
    TwoDayPackage overnight("Ah Keong", "Lisa", "GG Condominium", "Taman Harmoni", "Johor Bahru", "Dengkil", "Johor", "Selangor", 81300, 65100, 36.50, 53, 100);
    overnight.showdetails();
    overnight.CalculateCost();
    getchar();
    return 0;
}