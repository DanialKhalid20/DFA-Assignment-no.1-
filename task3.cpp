#include<iostream>
#include<string>
using namespace std;
 class DFA{
 	string s;
 	public:
 		void get_string(){
 			cout<<"Enter string"<<endl;
 			cin>>s;
		 }
 	
 	void checking_string(){
 		if(s=="a"||s=="b"||s=="cb"||s="cc"){
 			cout<<"String accepted";
		 }
 		else{
 			cout<<"string not accepted";
		 }
 		
 		
 	}
 };
 
 
 int main(){
 	DFA d;
 	d.get_string();
	d.checking_string();
 	
 }