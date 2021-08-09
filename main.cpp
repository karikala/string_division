#include <iostream>
using namespace std;
int findSmallestDivisor(const string& s, string t){
    string sb,k;
    int k11,n,flag=1;
    if(s.length()%t.length()!=0){
        return -1;
    }
    for(int i=0; i*t.length()<s.length();i++){
        sb.append(t);
    }
    if(sb!=s){
        return -1;
    }
    for(int j=0; j<t.length() && flag==1;j++){
        string k1;
        k = k+t[j];
        for( k11=0;k11<t.length() && flag==1;k11++){
            k1.append(k);
            if(k1==t){
                n =k.length();
                flag=0;
            }
        }
    }
    return n;

}
int main() {
    string s,t;
    cout<<"Enter S String: ";
    cin>>s;
    cout<<"Enter t String: ";
    cin>>t;
    int result;
    result = findSmallestDivisor(s,t);
    cout<<result;
    return result;
}
