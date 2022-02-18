#include<iostream>
#include<string>
using namespace std;

class square{
    private:
        int length;

    public:
        void setLength(int new_length);
        void showArea();
};

void square::setLength(int new_length){
		length = new_length ;
}

	
void square::showArea(){
	int area;
	area = length*length;
	cout << "Area:" << area;
}



int main(){
    int l=0 ;
    cout << "Please input lenght:";
    cin >> l;
    square R1;  // int a;
    R1.setLength(l);
    R1.showArea();
    return 0;
}

