#include <iostream>
#include <conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include <stdio.h>
#include "bienvenido.h"
#include "stickempire.h"
#include"cadenita.h"

using namespace std;
int x, y;
char username['s'];
char email[15];
char pasword['d'];
char paswordc['d'];
void validusername () {
	    cadlongitud1(username);cadcomparari(username, beforeusern);
	   y= cadcomparari(username, beforeusern);
	  
     for (y;y==1;y)
	{	cout<<"Sorry this username is not avaible, try again"<<endl;
	    cout<<"USERNAME=";
     	gets(username);
     	cadlongitud1(username);cadcomparari(username, beforeusern);
		y=cadcomparari(username, beforeusern);
	}
}

int main () {
	gotoxye(35,10);//STICKEMPIRES.H
	 
	cout<<"*******************STICK EMPIRE***********************"<<endl;
	cout<<"USERNAME=";
	gets(username);
	validusername();
	cout<<"EMAIL=";
	gets(email);
	cout<<"CREATE PASSWORD=";
	gets(pasword);
	cadlongitud2(pasword);
	cout<<"CONFIRM PASSWORD=";
	gets(paswordc);

	x=cadcomp(pasword, paswordc);
    
	for(x;x==0;x)
	{	cout<<"Thera are not any considen. Please try again"<<endl;
		cout<<"CREATE PASSWORD=";
		gets(pasword); cadlongitud2(pasword);
    	cout<<"CONFIRM PASSWORD=";
		gets(paswordc);
		x=cadcomp(pasword, paswordc);
		
	
	}
	
	system("cls");
	gotoxyw(35,10); // BIENVENIDO.H
	
	cout<<"++++++++++++++++++ WELCOME TO THE GAME+++++++++++++++++"<<endl;
	cout<<"YOUR USERNAME~*~"<<endl;
	cout<<"+++++++++++++";
	cadmayus(username);
	cout<<"+++++++++++++";
	cadminus(username);
	cout<<"EMAIL="<<email<<endl;
	cout<<"YOUR PASWORD :"<<pasword<<endl;
	cout<<"\t\t\t++++++++++++++++++++++++++++++++ START TO GAME++++++++++++++++++++++++++++++"<<endl;
	getch();

}
