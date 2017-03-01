#include <iostream> 
using namespace std; 


class Star { 
public: 
void Arr1 (int index) { 
	for (int i=0; i<index; i++) {
		cout << '*'; 
}}};

class Triangle: public Star { 
public:
void Arr2 (int index) { 
	for (int i=0; i<index; i++) {
		cout << ' '; 
}}};


class David: public Triangle{};
class CrazyMF: public David{}; 

int main() { 
 
Star s; 
s.Arr1(11); 
cout << endl << endl; 

Triangle m;
m.Arr2(5);m.Arr1(1);cout << endl;
m.Arr2(4);m.Arr1(3);cout << endl;
m.Arr2(3);m.Arr1(5);cout << endl;
m.Arr2(2);m.Arr1(7);cout << endl;
m.Arr2(1);m.Arr1(9);cout << endl;
m.Arr1(11);cout << endl;
cout << endl << endl; 

David r;
r.Arr2(5);r.Arr1(1);cout << endl;
r.Arr2(4);r.Arr1(3);cout << endl;
r.Arr1(11);cout << endl;
r.Arr2(1);r.Arr1(9);cout << endl;
r.Arr2(1);r.Arr1(9);cout << endl;
r.Arr1(11);cout << endl;
r.Arr2(4);r.Arr1(3);cout << endl;
r.Arr2(5);r.Arr1(1);cout << endl;
cout << endl << endl; 

CrazyMF h;
h.Arr2(8);h.Arr1(1);cout << endl;
h.Arr2(7);h.Arr1(3);cout << endl;
h.Arr2(6);h.Arr1(5);cout << endl;
h.Arr1(17);cout << endl;
h.Arr2(2);h.Arr1(13);cout << endl;
h.Arr2(3);h.Arr1(5);h.Arr2(1);h.Arr1(5);cout << endl;
h.Arr2(2);h.Arr1(3);h.Arr2(7);h.Arr1(3);cout << endl;
h.Arr2(1);h.Arr1(1);h.Arr2(13);h.Arr1(1);cout << endl;
//h.Arr2(0);h.Arr1(1);h.Arr2(15);h.Arr1(1);cout << endl;




}
