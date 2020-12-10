#include<iostream>
using namespace std;

class Volume{
	int length;
	int breadth;
	int height;
	
	public:
		Volume(int x, int y, int z):length(x),breadth(y),height(z){
			cout << "The volume  is : " << length*breadth*height;
		}
};

int main(){
	int a, b, c;
	
	cout << "Enter the length" << endl;
	cin >> a;
	cout << "Enter the breadth" << endl;
	cin >> b;
	cout << "Enter the height" << endl;
	cin >> c;
	
	Volume V(a,b,c);
	
	return 0;
	
	
}
