#include<iostream>
#include<conio.h>
#include<windows.h>
#include<fstream>
using namespace std;
void gotoxye(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      fstream stickempires;
	  stickempires.open("logo1.txt");
	  string guardar;
	  while (getline(stickempires,guardar))
   	{ cout<<"\t\t\t"<<guardar<<endl;	}
    	stickempires.close();
                                                                  
                                                                  
        SetConsoleCursorPosition(hcon,dwPos);  
 }  

