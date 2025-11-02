#include<bits/stdc++.h>
using namespace std;

double FindDistance(int x1,int y1,int x2, int y2){
double ans = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
return ans;
}

int main(){
int x1,x2,y1,y2;

cout<<"Enter x1 and y1:";
cin>>x1>>y1;

cout<<"Enter x2 and y2:";
cin>>x2>>y2;

double ans = FindDistance(x1,y1,x2,y2);
cout<<"The distance is:"<<ans<<endl;
return 0;

}
