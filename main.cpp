#include <iostream>
#include <iomanip>
using namespace std;

int main(){ 

	//ASSIGNMENT 1. Create a program in C++ that will display your PERSONAL INFORMATION, CONTACT INFORMATION, AND REASON WHY YOU CHOOSE THIS COURSE.
	cout <<"PERSONAL INFORMATION"<<endl;
	cout <<"Fullname: Kenjie Rousfel J. Pernecita"<<endl;
	cout <<"Date of Birth: January 2, 2005"<<endl;
	cout <<"Gender: Male"<<endl;
	cout <<setw(95)<<setfill('-')<<" \n"<<setfill(' ');
	cout <<"CONTACT INFORMATION"<<endl;
	cout <<"Adress: Barangay Lo-oc Hindungawan"<<endl;
	cout <<"City: Bais City"<<setw(43)<<"State: Negros Oriental"<<setw(23)<<"Zipcode: 6206"<<endl;
	cout <<"Phone Number: 09556602326"<<endl;
	cout <<"Email: kenjiepen14@gmail.com"<<endl;
	cout <<setw(95)<<setfill('-')<<" \n"<<setfill(' ');
	cout <<"REASON WHY YOU CHOOSE THIS COURSE"<<endl;
	cout <<"	I chose this course because I wanted to be a Back-end developer to learn and create "<<endl;
	cout <<"how the backside of applications or websites work. From a young age, I was already exposed"<<endl;
	cout <<"in computers and always thought of how games and other applications were created and those "<<endl;
	cout <<"are the reason why I want to pursue on the degree in Information Technology."<<endl;
    cout << endl;
	
	return 0;
}