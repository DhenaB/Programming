/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct houseType{
    string smell;
    string style;
    bool garage;
    double price;
    int numOfBed;
    bool basement;
    int numOfBaths;
    bool wood;
    string address;
    int size;
};

void printHouseTypeInfo(houseType newHouse){
    cout<<"smell: "<< newHouse.smell<< endl;
    cout<<"style: "<< newHouse.style<< endl;
    cout<<"garage: "<< newHouse.garage<< endl;
    cout<<"price: $ "<< newHouse.price << endl;
    cout<<"numOfBed: "<< newHouse.numOfBed<< endl;
    cout<<"basement: "<< newHouse.basement<< endl;
    cout<<"numOfBaths: "<< newHouse.numOfBaths<< endl;
    cout<<"wood: "<< newHouse.wood<< endl;
    cout<<"address: "<< newHouse.address<< endl;
    cout<<"size: "<< newHouse.size << "sq ft"<< endl;
}
int main()
{
    houseType newHouse1;
    newHouse1.smell ="Good";
    newHouse1.style = "Ranch";
    newHouse1.garage = "Yes";
    newHouse1.price = 299000;
    newHouse1.numOfBed = 4;
    newHouse1.basement = "Yes";
    newHouse1.numOfBaths = 2;
    newHouse1.wood = "Yes";
    newHouse1.address ="222 Edward St. Warren, MI";
    newHouse1.size = 1200;
    
    houseType newHouse2;
    newHouse2.smell ="Good";
    newHouse2.style = "Colonial";
    newHouse2.garage = "Yes";
    newHouse2.price = 399000;
    newHouse2.numOfBed = 5;
    newHouse2.basement = "Yes";
    newHouse2.numOfBaths = 2;
    newHouse2.wood = "Yes";
    newHouse2.address ="345 Adler dr. Warren, MI";
    newHouse2.size = 1500;
    
    
    printHouseTypeInfo(newHouse1);
    cout<<endl;
    printHouseTypeInfo(newHouse2);

    return 0;
}
