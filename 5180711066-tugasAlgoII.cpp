#include <iostream> //menghitung modulus
using namespace::std;
int Modulus(int nilai,int n){
    if(n==0){
        return (nilai%n);
    }
    else if(n==nilai){
        return (0);
    }
    else{
        return (nilai%n);
    }
}
main(){
    int a,b;
cout<<" Bilangan  : ";cin>>a;
cout<<" Modulus   : ";cin>>b;
cout<<" Hasil "<<a<<" % "<<b<<" = "<<Modulus(a,b);
}

