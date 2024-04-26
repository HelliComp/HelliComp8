#include <iostream>
using namespace std;
int main(){
int a , b , m;
m=0;
cin>>a;
while(a>0){
    cin>>b;
    if(b==0){
       m=m+1;
    }
    if(b==1){
       m=m+1;
    }
    if(b==4){
       m=m+1;
    }
    if(b==6){
       m=m+1;
    }
    if(b==9){
       m=m+1;
    }
    a=a-1;
}
cout<<m;
}
