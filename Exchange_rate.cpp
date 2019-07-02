#include<iostream>
using namespace std;
void main()
{

	float dollars, thb, euro ;
	cout << "Input Thai Baths : " ;
	cin >> thb ;
	cout << "****Exchange Rate****" << endl ;
	euro = thb / 34.89 ;
	dollars = thb / 30.63 ;
		cout << thb << " Baths is " << dollars <<" Dollars." << endl ;
		cout << thb << " Baths is " << euro <<" Euro." << endl ;
}