#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
int f;
cout<<"enter 1 for ex"<<endl<<"enter 2 for sinx"<<endl;
cin>>f;
int i,n;
float x;
cout<<"enter the value of x"<<endl;
cin>>x;
cout<<"enter the number of terms you want"<<endl;
cin>>n;
switch(f){
    case 1:
    float a ,s,true_value;
    true_value=exp(x);
    a=0;
    s=1;
     for(i=1;i<n;i++){
        s=s*(x/i);
         a+=s;
     }
    cout<<"the true value of function is "<<true_value<<endl;
    cout<<"the value by taylor series is "<<a+1<<endl;
    cout<<"absolute error wrt to truw value is "<<abs(true_value - (a+1))<<endl;
    break;
    case 2:
    double c,b,rad,d;
    ;
    rad=(x*3.14)/180;
    d=sin(rad);
    c=1;
    for(i=1;i<=n;i=i+1){
         c= c*(rad/(2*i+1))*(rad/2*i)*(-1);
         b+=c;
    }
    cout<<"the value by taylor series is"<<(b*rad) + rad<<endl;
    cout<<"the true value of function is "<<d<<endl;
    cout<<"absolute error wrt to truw value is "<<abs( d-((b*rad) + rad))<<endl;
    break;
     }
    return 0 ;
}


//testing