#include<iostream>
using namespace std;
class rationalnumber
{
    private :

   int  pn;
    int qn;
    public :
    int a;
    int b;

  rationalnumber( )
 {
pn =1;
qn=1;

 }
 void get( )
 {
    cout<< "enter q and p"<<endl;

   cin>>a;
   cin>>b;
 }
 void set( )
 {
   pn=a;
   qn=b;
 }

rationalnumber operator + ( rationalnumber N2)
{
rationalnumber t;
t.pn= pn*N2.qn +N2.pn*qn;
t.qn=qn*N2.qn;
return t;



}
friend ostream & operator<<(ostream &os, rationalnumber N3);

 

};
 ostream & operator<<(ostream &os, rationalnumber N3)
 {
     os<<N3.pn<<"/"<<N3.qn;
        return os;
 }
int main()
{

rationalnumber n1,n2,n3;
n1.get();
n2.get();
n3=n1+n2;
cout<<"the new ratinal number is "<<n3<<endl;



return 0;}