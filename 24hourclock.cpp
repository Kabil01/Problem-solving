#include <bits/stdc++.h>
#include <iostream>
using namespace std;


string timeConversion(string s) {
    char a[s.length()-2];
    if(s[8]=='P'){
    	if(s[0]=='1' && s[1]=='2'){
    	
		}
		else{
		cout<<"len"<<endl;
        char t1=s[0];
        char t2=s[1];
        int t3=static_cast<int>(t1-48)*10+static_cast<int>(t2-48)+12;
        s[0]=static_cast<char>(t3/10+48);
        s[1]=static_cast<char>(t3%10+48);   
    }
    }
    else if(s[8]=='A' && s[0]=='1' && s[1]=='2'){
    
        s[0]=static_cast<char>(48);
        s[1]=static_cast<char>(48);      
    }
    for(int i=0;i<8;i++){
        a[i]=s[i];
    }
    return a;
}

int main()
{
    string s;
    cin>>s;

    string result = timeConversion(s);

    for(int i=0;i<8;i++){
        cout<<result[i];
    }
    return 0;
}
