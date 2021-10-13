#include "std_lib_facilities.h"
int main()
try {

//Cout << "Success!\n";
cout << "Success!\n";
//cout << "Success!\n;
cout << "Success!\n";
//cout << "Success" << !\n"
cout << "Success" << "!\n";
//cout << success << '\n';
cout << "success" << '\n';
//string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
//vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
vector<int> v1(10); v1[5] = 7; if (v1[5]=7) cout << "Success!\n";
int cond = 1;
//if (cond) cout << "Success!\n"; else cout << "Fail!\n";
if (cond = 1) cout << "Success!\n"; else cout << "Fail!\n";
//bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n";
//string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
string s = "ape"; bool d = true; if (d) cout << "Success!\n";
//string s = "ape"; if (s=="fool") cout << "Success!\n";
string maki = "ape"; if (maki!="fool") cout << "Success!\n";
//string s = "ape"; if (s=="fool") cout < "Success!\n";
string e = "ape"; if (e!="fool") cout << "Success!\n";
//string s = "ape"; if (s+"fool") cout < "Success!\n";
string se = "ape"; if (se+"fool" == "apefool") cout << "Success!\n";
//vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
vector<char> ve(5); for (int i=0; i<ve.size(); ++i) ; cout << "Success!\n";
//vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
vector<char> vn(5); for (int i=0; i<=vn.size(); ++i) ; cout << "Success!\n";
//string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
string sus = "Success!\n"; for (int i=0; i<10; ++i) cout << sus[i];
//if (true) then cout << "Success!\n"; else cout << "Fail!\n";
if (true) cout << "Success!\n"; else cout << "Fail!\n";
//int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
int x = 2000; int cg = x; if (cg == 2000) cout << "Success!\n";
//string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
string sf = "Success!\n"; for (int i=0; i<10; ++i) cout << sf[i];
//vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
vector<int> vaa(5); for (int i=0; i<=vaa.size(); ++i) ; cout << "Success!\n";
//int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n";
//int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";
int x1 = 3; double szam = 6.5/(x1 - 2); if (szam==2*x1+0.5) cout << "Success!\n";
//string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
string sgg = "Success!\n"; for (int i=0; i<=8; ++i) cout << sgg[i];
//int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";
int im=9; int jk = 9; while (im<10) ++im; if (jk<im) cout << "Success!\n"; //?
//int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n";
int x2 = 4; double d1 = 17/(x2-2); if (d1=2*x2+0.5) cout << "Success!\n";
//cin << "Success!\n";
cout << "Success!\n";
keep_window_open();
return 0;
}
catch (exception& e) {
cerr << "error: " << e.what() << '\n';
keep_window_open();
return 1;
}
catch (...) {
cerr << "Oops: unknown exception!\n";
keep_window_open();
return 2;
}