/*
N!=1.2.3.4.5.6.....(N-1).N;
2!=2
3!=6
0!=1
1!=1
*/

#include<iostream>
int fact(int N){
    if(N==0)
        return 1;
    else
        return fact(N-1)*N;
}

int main(){
    using namespace std;
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    cout<<fact(n)<<endl;
}


