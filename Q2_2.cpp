//1171100781 Faretz Emir Imran bin Rizal Imran
//1171101849 Pang Jie Xin 

#include <iostream>
#include <stdio.h>
using namespace std;

class Box{
    private:
        int l; // length
        int b; // breadth
        int h; // height

    public:
        Box(){l = 0; b = 0; h = 0;}
        Box(int L, int B, int H) {l = L; b = B; h = H;}
        Box(const Box& B){l = B.l; b = B.b; h = B.h;}
        int getLength();
        int getBreadth();
        int getHeight();
        long long CalculateVolume();
        friend bool operator < (Box& A, Box& B);
        friend ostream& operator << (ostream &output, const Box& B);

};

int Box::getLength(){
    return l;
}

int Box::getBreadth(){
    return b;
}

int Box::getHeight(){
    return h;
}

long long Box::CalculateVolume(){
    long long volume;
    volume = l*b*h;
    return volume;
}

bool operator < (Box& A, Box &B){
    if ( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.l) && (A.b == B.b)) ){
        return true;
    }
    else{
        return false;
    }
}

ostream& operator << (ostream &output, const Box& B){
    output << B.l << " " << B.b << " " << B.h;
    return output;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
    return 0;
}