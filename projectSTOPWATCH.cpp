#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
int main(){

    system ( "cls" );  
int HH = 0, MM = 0, SS = 0;  
cout << " \n\t\t stopwatch";  
cout << " \n\t\t HH: MM: SS";  
cout << " \n\t\t " << HH << " : " << MM << " : " << SS;  
cout << " \n\t\t press any key to start";  
char ch;char j;
cin>>ch;
while(!kbhit())
{
    Sleep(1000);
    SS++;
    if(SS==60)
    {

        MM++;
        SS=0;

    }
    if(MM==60)
    {
        HH++;
        MM=0;

    }
system ( "cls" );  
cout << " \n\t\t stopwatch";  
cout << " \n\t\t HH: MM: SS";  
cout << " \n\t\t " << HH << " : " << MM << " : " << SS; 
//cout << " \n\t\t press any key to stop";
//cin>>j;
//getch();

}
cout << " \n\t\t the time after pausing is";  
    cout << " \n\t\t " << HH << " : " << MM << " : " << SS; 
return 0;}