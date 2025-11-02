#include<bits/stdc++.h>
using namespace std;
#define Pi 3.1416
void pOfR(float length, float width, float &perOfR){
perOfR = 2*(length+width);
}

void pOfC(float r, float &perOfC){
perOfC = 2*Pi*r;
}

int main(){
float length, width,r, perOfR, perOfC;

cout<<"Enter the Length:";
cin>>length;

cout<<"Enter the Width:";
cin>>width;

cout<<"Enter the r:";
cin>>r;

pOfR(length, width, perOfR);
pOfC(r,perOfC);

cout<<"The perimeter of Ractangle is:"<<perOfR<<endl;
cout<<"The perimeter of Circle is:"<<perOfC<<endl;

return 0;
}
