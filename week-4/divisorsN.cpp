#include<bits/stdc++.h>
using namespace std;

void Devisors(int x){
    cout<<"Divisors of the number are: ";
for(int i = 1; i<=x;i++){
    if(x%i==0)
cout<<i << " ";
}
cout<<endl;
}

int main(){
int x;
cout<<"Enter the number:";
cin>>x;
Devisors(x);

return 0;

}
