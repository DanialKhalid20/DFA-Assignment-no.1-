#include<iostream>
#include<string>
using namespace std;
 class DFA{
 	string s;
 	int c1=0,c2=0;
 	public:
 		void get_string(){
 			cout<<"Enter string (0's and 1's only)"<<endl;
 			cin>>s;
		 }
 	
 	void checking_string(){
 		for(int i=0;i<s.size();i++){
 			if(s[i]==0){
 				c1++;
			 }
 			else{
 				c2++;
			 }
 			
		 }
 		
 		if(c1%2==0 && c2%2==0){
 			cout<<"String accepted";
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