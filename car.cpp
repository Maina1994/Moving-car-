#include <windows.h> 
  #include <iostream>  
  using namespace std;  
    
  void gotoXY(int x, int y)  
  {  
   COORD coord;  
   coord.X = x;  
   coord.Y = y;  
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);  
  }  
    
  int main() {  
    gotoXY(4,4);  
    cout<<"I moved here!\n";  
    gotoXY(5,7);  
    cout<<"And I moved there!\n";  
    return 0;  
  }  