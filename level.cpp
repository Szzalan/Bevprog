#include "std_lib_facilities.h"
int main() 
{
	cout <<"Enter the name of the person you want to write to\n";
	string first_name;
	cin >> first_name;
	cout <<"Dear, " << first_name << "!\n";
	cout << "\n";
	cout <<"Hello how's your day been so far?I'm alright.It's fun to attend to this university.I'm enjoying my stay here at the local student hostel.\n";
	string friend_name;
	cout << "Please enter a name of a friend of yours\n";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";
	char friend_sex {0};
	cout <<"Please enter 'f' if your friend is female,'m' if he is male\n";
	cin >> friend_sex;
	if(friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	if(friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	cout << "Please enter your age!\n";
	int age;
	cin >> age;
	cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	if(age <=0 || age >= 110)
		simple_error("you're kidding!\n");
	if(age<12)
		cout << "Next year you will be " << age+1 << ".\n";
	if(age==17)
		cout << "Next year you will be able to vote.\n";
	if(age>70)
		cout << "I hope you are enjoying retirement.\n";
	cout << "Yours sincerely, __ Zalán Szilágyi\n";
	return 0;
}
