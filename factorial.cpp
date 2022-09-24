#include<iostream>
using namespace std;

long long fact(int n){
    if (n==0)return 1;
    //func(n-1);
    //cout<<n<<endl;
    return n*fact(n-1);

}

int main(){
    int n;
    cin>>n;
    cout<< fact(n)<<endl;
    return 0;
}
