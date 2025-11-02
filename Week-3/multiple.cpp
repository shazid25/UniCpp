#include<bits/stdc++.h>
using namespace std;

double Multi(float n1, float n2){
if(n1==n2 * 2){
    cout<<"n1 is multi of n2";
}
else if(n2 == n1*2){
    cout<<"n2 is multi of n1";
}
else
    {
        cout<<"Not multi";
    }
    return 0;
}

int main(){
float n1,n2;

cout<<"Enter n1:";
cin>>n1;

cout<<"Enter n2:";
cin>>n2;

float ans = Multi(n1,n2);
cout<<Multi<<endl;

return 0;

}
