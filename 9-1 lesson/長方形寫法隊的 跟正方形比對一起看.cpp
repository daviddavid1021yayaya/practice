#include<iostream>
#include<string>
using namespace std;
class Rectangle{
    private:
        int length;
        int width;
    public:
        void setLength(int new_length);
        void setWidth(int new_width);
        int showArea();
};

void Rectangle::setLength(int new_length){
    length = new_length; 
}
void Rectangle::setWidth(int new_width){
    width = new_width; 
}
int Rectangle::showArea(){
    return length * width;
}

int main(){
    int l=0 ,w=0 ;
    cout << "Please input lenght:";
    cin >> l;
    cout << "Please input width:";
    cin >> w;
    Rectangle R1;
    R1.setLength(l);
    R1.setWidth(w);
    cout << "Area:" << R1.showArea();
    return 0;
}





