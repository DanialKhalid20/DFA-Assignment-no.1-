#include<iostream>
#include<string>
using namespace std;

class DFA{
 string s;
 bool a=false;
 public:
 	
 	void get_string(){
 		cout<<"Enter the string if starts with 0 must have another 0 and viceversa with 1"<<endl;
 		cin>>s;
	 }
	
	
void checking_string(){
	
if(s[0]=='0'){
	for(int i=1; i<s.size();i++){
		if(s[i]=='0'){
			a=true;
		}	
		}
		}
	
if(s[0]=='1'){
	for(int i=1; i<s.size();i++){
		if(s[i]=='1'){
			a=true;
		}	
		
		}
		}			

if(a==true){
	cout<<"string accepted";
}
else{
	cout<<"String not accepted";
}		
}
};

int main(){
	DFA d;
	d.get_string();
	d.checking_string();
	
	
	
}


