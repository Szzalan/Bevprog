#include "std_lib_facilities.h"
#include <iostream>
#include "fstream"
void print_array10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i)
	{
		os << a[i] << '\n';
	}
}
////////////////////////////////////////////////
void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		os << a[i] << '\n';
	}
}
////////////////////////////////////////////////////
void print_vector(ostream& os,vector <int> a)
{
	for (int i = 0; i < a.size(); ++i)
	{
		os << a[i] << '\n';
	}
}
int main(){
	int arrsize = 10;
	int *arr = new int[10];
	
	for (int i = 0; i < 10; ++i)
	{
		cout << arr[i] << '\n';
	}
	delete[] arr;
	///////////////////////////////////
	int *arr2 = new int[10];	
	for (int i = 0; i < 10; ++i)
	{
		arr2[i] = 100+i;
		
	}
	print_array10(cout,arr2);
	delete[] arr2;
	////////////////////////////////////
	int *arr3 = new int[11];
	for (int i = 0; i < 11; ++i)
	{
		arr3[i] = 100+i;
		
	}
	print_array(cout,arr3,11);
	delete[] arr3;
	//////////////////////////////////////
	int *arr4 = new int[20];
	for (int i = 0; i < 20; ++i)
	{
		arr4[i] = 100+i;
		
	}
	print_array(cout,arr4,20);
	delete[] arr4;
	//////////////////////////////////////
	vector <int> v1;	
	for (int i = 0; i < 10; ++i)
	{
		v1.push_back(100+i);
	}
	print_vector(cout,v1);
	/////////////////////////////////////
	vector <int> v2;	
	for (int i = 0; i < 11; ++i)
	{
		v2.push_back(100+i);
	}
	print_vector(cout,v2);
	////////////////////////////////
	vector <int> v3;	
	for (int i = 0; i < 20; ++i)
	{
		v3.push_back(100+i);
	}
	print_vector(cout,v3);
	return 0;
}