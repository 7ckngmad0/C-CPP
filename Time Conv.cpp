#include <iostream>
using namespace std;
int main()
{
//Declarations ng bilat
int Sec, SecLeft, NoOfMin, MinLeft, NoOfHours;

cout << "Specify no. of seconds: ";
cin >> Sec;

NoOfMin = Sec / 60;
SecLeft = Sec % 60;
NoOfHours = NoOfMin / 60;
MinLeft = NoOfMin % 60;

//Output may lalabas na tite
cout << "Number of hours = " << NoOfHours << endl;
cout << "Number of minutes = " << MinLeft << endl;
cout << "Number of seconds = " << SecLeft << endl;
}
