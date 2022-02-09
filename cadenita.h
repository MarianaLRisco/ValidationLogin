#include<iostream>

using namespace std;
char beforeusern[8]= "angoraa";
int d=8, s=7;


int cadlong(char X[])
{int contador=0;	
 for (int i=0; X[i]!='\0'; i++)
 	contador++;
 return (contador);}

int cadlongitud1 ( char username[])
{   int aux=0, lang=0;
	for (int i=0;username[i]!='\0';i++)
	      {lang++;}
	      	while (lang!=s){
		cout<<"Invalid"<<endl;
		cout<<"the username must be of "<<s<<" characters"<<endl;
		lang=0;
		cout<<"USERNAME=";gets(username);
		for (int i=0;username[i]!='\0';i++)
	      {lang++;}
		} 
	} 

    
int cadlongitud2 ( char pasword[]){
int  lng=0;
	for(int j=0;pasword[j]!='\0';j++){
		lng++;}
	
     while (lng!=8){   
		cout<<"Invalid pasword"<<endl;
		cout<<"the pasword must be of "<<8<<" characters"<<endl;
		lng=0;
		cout<<"CREATE PASWORD=";gets(pasword);
		for (int i=0;pasword[i]!='\0';i++)
	      {lng++;}

	}
   
} 

 void cadmayus ( char username[]){
	
for (int i=0; username[i]!='\0';i++)
	      {if(username[i]>96 && username[i]<123)
	       username[i]=username[i]-32;}
	cout<<username<<endl;
}
void cadminus ( char username[]){
	
	for (int j=0; username[j]!='\0';j++)
	      {if(username[j]>64&&username[j]<90)
		     username[j]=username[j]+32;}
    cout<<username<<endl;
	}

int cadcomp(char pasword[], char paswordc[])
{
	
if (cadlong(pasword)==cadlong(pasword))
 	{for (int i=0;pasword[i]!='\0'||paswordc[i]!='\0';i++)
 	
	      {if (pasword[i]!=paswordc[i])
	      {return 0;}
		  }
	 	return 1;}
 else return 0;}
 
		  
int cadcomparari(char username[], char beforeusern[])
{   

	for (int j=0; beforeusern[j]!='\0';j++)
	      {if(beforeusern[j]>96&&beforeusern[j]<123)
	       beforeusern[j]=beforeusern[j]-32;}
	for (int j=0;username[j]!='\0';j++)
	      {if(username[j]>96&&username[j]<123)
	       username[j]=username[j]-32;}
	for (int i=0;username[i]!='\0'||beforeusern[i]!='\0';i++)
	      {if (username[i]!=beforeusern[i])
		   {return 0;}}
	return 1;}	



