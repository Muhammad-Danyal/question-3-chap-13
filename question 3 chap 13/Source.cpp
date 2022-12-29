#include<iostream>
using namespace std;

class pointType {
protected:
	double xcor;
	double ycor;
public:	
	pointType():xcor(0),ycor(0){}
	void setter();
	void getter();
};
void pointType::setter() {
	cout << "Enter x-cordinate \n";
	cin >> xcor;
	cout << "Enter y-cordinate \n";
	cin >> ycor;
}
void pointType::getter() {
	cout << "x-cordinate : " << xcor<<endl;
	cout << "y-cordinate : " << ycor << endl;
}
int main() {
	pointType p;
	int choice;
	while (true) {
		cout << "________________MAIN MENU_______________" << endl;
		cout << " 1.Set Point" << endl;
		cout << " 2.Display Point" << endl;
		cout << " 3.Exit" << endl;
		cout << "What you want to do? \n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			cout << "--------------Set Point--------------\n";
			p.setter();
			break;
		case 2:
			system("cls");
			cout << "--------------Display Point--------------\n";
			p.getter();
			break;
		case 3:			
			exit(0);
		default:
			cout << "Enter a valid input.\n";
			break;
		}
	}
}