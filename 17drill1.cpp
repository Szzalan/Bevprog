#include "std_lib_facilities.h"
void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		os << a[i] << '\n';
	}
}
void print_vector(ostream& os,vector <int> a)
{
	for (int i = 0; i < a.size(); ++i)
	{
		os << a[i] << '\n';
	}
}
int main()
{
	int bruh = 7;
	int *p1;
	p1 = &bruh;
	cout << "p1: " << *p1 << endl;
	cout << "bruh: " << bruh << endl;
	int arr [7] = {1,2,4,8,16,32,64};
	int *p2;
	p2 = arr;
	print_array(cout,p2,7);
	print_array(cout,arr,7);
	int* p3 = p2;
	p1 = p2;
	p3 = p2;
	print_array(cout,p1,7);
	print_array(cout,p2,7);
	int arr2 [10] = {1,2,4,8,16,32,64,128,256,512}; //10
	p1 = arr2;
	int arr3 [10];
	p2 = arr3;
	p2 = p1;
	vector <int> v1 = {1,2,4,8,16,32,64,128,256,512};
	vector <int> v2(10);

	return 0;	
}