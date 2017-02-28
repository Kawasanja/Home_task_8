#include <iostream>
using namespace std;



class Star {
	char * arr;
	
	public:
Star (int a) {
	arr = new char[a];
}
char& setArr (int index) {
	return arr[index] = '*';}
	
~Star() {
	delete [] arr;}
};
	
	
int main()
{
int k = 13;
if (k%2!=0) { 
Star m(k); 
for (int i=0; i<k; i++) {
	cout << m.setArr(i);
}
}
else 
{cout << "Incorrect number";}
}


