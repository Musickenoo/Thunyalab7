#include<iostream>
#include<string>

using namespace std;

string Reversedtext(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}


int main(){
    
    string a ;
    string b ;
    string y ;
    cout << "Input text: ";
    cin >> a ;
    cout << "Reversed text: ";
    b = Reversedtext(a);
    cout << b <<"\n" ;
    cout << "Palindrome: " ;
    if (func2(a) == func2(b)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}