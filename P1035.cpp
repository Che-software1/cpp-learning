#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,i=1;
    cin>>k;
    double sum=0;
    while(sum<=k){
        sum+=1.0/i;
        i++;
    }
    cout<<i-1;
    return 0;
}