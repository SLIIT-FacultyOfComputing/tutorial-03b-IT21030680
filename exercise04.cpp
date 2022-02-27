#include <iostream>
using namespace std;

void print(int len, int wth);
void input(int len, int wth);

// Do not change the main() function
int main() {
   int length = 10, width = 5;
   input(length, width);
   print(length, width);
   return 0;
}

// Do not change the print() function
void print(int len, int wth) {
   cout << "Length : " << len 
        << ", Width  : " << wth << endl;
}

// Implement the Input Function here
void input(int len, int wth){
  int input_len, input_wth;

    cout << "Input value of length : " << input_len<< endl;
    cout << "Input value of width : " << input_wth<< endl;

    if (input_len==len && input_wth==wth){
      cout<<"Correct length and width entered";}
    else{
      cout<<"Correct length and width entered";}

}
