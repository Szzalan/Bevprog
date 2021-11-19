#include "std_lib_facilities.h"
#include <iostream>
#include <vector>

struct Point
{
	int x,y;
};
int main()
{
	int x = 1;
	int y = 1;
	cout << "Please enter 7 coordinate pairs" << endl;
	vector <Point> original_points;
	for (int i = 0; i < 7; ++i)
	{
		cin >> x >> y;
		original_points.push_back(Point{x,y});
	}
	ofstream file;
	file.open("mydata.txt");
	if(!file)
		error("Can't open this file");
	for (auto Point : original_points) {
		file << Point.x << " "<< Point.y << endl;
	}
	file.close();	
	ifstream read;
	read.open("mydata.txt");
	if(!read)
		error("Can't open this file");
	vector<Point> processed_points;
	while(read >> x >> y)
		processed_points.push_back(Point{x,y});
	read.close();
	for (auto p: original_points)
		cout << p.x << " " << p.y << endl;
	for (auto p: processed_points)
		cout << p.x << " " << p.y << endl;
	if(original_points.size() != processed_points.size())
		error("Something's wrong!");
	return 0;

}