#include <iostream> 
using namespace std; 


class Star { 
public: 

void Arr1 (int index) { 

for (int i=0; i<index; i++) 
cout « '*'; 
} 

void Arr2 (int index){ 

for (int i=1;i<=index/2+1;i++) 
{ 
for (int j=1;j<=index/2+1-i;j++) 
{ 
cout « ' '; 
} 
for (j=1;j<=2*i-1;j++) 
{ 
cout « '*'; 
} 
cout « endl; 
} 
} 


void Arr3 (int index){ 
cout « "David's star";} 

}; 

class Triangle: public Star{}; 
class David: public Triangle{}; 

int main() { 
int k; 
cout « "Enter the number: "; 
cin » k; 
if (k%2 != 0){ 
Star s; 
s.Arr1(k); 
cout « endl « endl; 
Triangle t; 
t.Arr2(k); 
cout « endl « endl; 
David d; 
d.Arr3(k);} 
else cout « "Bad medicine"; 
}
