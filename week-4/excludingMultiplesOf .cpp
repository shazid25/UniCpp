#include<bits/stdc++.h>
using namespace std;

double Dev(int start, int endN, int sum=0){
for(int i=start; i<=endN; i++){
    if(i%7!=0){
        sum+=i;
    }
}
return sum;
}

int main(){
int start,endN;
cout<<"Enter the starting number:";
cin>>start;

cout<<"Enter the ending number:";
cin>>endN;

double sum = Dev(start, endN);

cout<<"The sum without 7 vag is:"<<sum<<endl;


return 0;
}
