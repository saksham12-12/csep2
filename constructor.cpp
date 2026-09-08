#include<iostream>
using namespace std;

class costumer{

string name;
int account_number;
int balance;
public:
costumer(string name, int account_number,int balance)
{   cout<<"Bank details are:";
    this->name=name;
    this->account_number=account_number;
    this->balance=balance;
}
void display()
{
    cout<<" "<<name<<" "<<account_number<<" "<<balance<<" ";
}
};
int main()
{
    costumer saksham("Saksham",1234,10000000);
    saksham.display();
    return 0;
   
}


