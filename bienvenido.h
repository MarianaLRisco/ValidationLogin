#include<iostream>
#include<conio.h>
#include<windows.h>
#include<fstream>
using namespace std;
void gotoxyw(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
       fstream welcome;
	 welcome.open("welcome.txt");
	  string guardar;
	  while (getline(welcome, guardar))
   	{ cout<<"\t\t\t\t\t"<<guardar<<endl;	}
    	welcome.close();
                                                                                      
      SetConsoleCursorPosition(hcon,dwPos);  
 }  

     
     
  

