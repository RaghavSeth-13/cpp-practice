using namespace std ;
#include<iostream>

int fact(int x){
    int f = 1 ;
    for(int i = 1; i <= x;i++){
        f *= i ;
    }
        return f ;
}
int main(){
    int n,r ;
    cout<<"Enter n : " ;
    cin>> n  ;
    cout<<"Enter  r : " ;
    cin>> r ;
    int a = fact(n) ;
    int  b = fact(r);
    int c = fact(n-r);
    cout<<a/(b*c)<<endl;
    return 0 ;
}