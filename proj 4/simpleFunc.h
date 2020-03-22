#include <iostream>

#include <sstream>
using namespace std;
double inputValdDouble2(){
	string s = "a";
	bool t = true;
	int decPointCount = 0;
	double num = 0;
	while (t){
		cin>>s;
		decPointCount = 0;
		t = false;
		for(int i = 0; i < s.length(); i++){
			
			if(s[i] == '.'){
				decPointCount ++;
			}
			if(decPointCount > 1){
			 	t = true;
			 	cout<<"Please Enter a valid number: " << endl;
			 	i = s.length() + 1;
			}else{
				if(s[i] != '0' && s[i] != '1' && s[i] != '2' && s[i] != '3' && s[i] != '4' && s[i] != '5' 
			  	&& s[i] != '6'  && s[i] != '7'  && s[i] != '8'  && s[i] != '9'  && s[i] != '.' )
			 	{
				 	
				 	t = true;
				 	cout<<"Please Enter a valid number: " << endl;
				 	i = s.length() + 1;
			 	
			 	}
			}
			
			
			 
		}
	}
	stringstream aa;
	aa << s;
	aa >> num;
	return num;
	
}
void getVal (double* a) { // get val from user
	double b;
	//cin >> b;
	b = inputValdDouble2();
	*a = b;
}
double genRand (int a ){
	srand (time(NULL));
	return rand() % a + 1;
}
double addition(double a, double b) {
	return a + b;
}
double subtraction(double a, double b) {
	return a-b;
}
double multiplication(double a, double b) {
	return a*b;
}
double dDivision(double a, double b) {
	return a/b;
	
}
int intDiv(double a, double b){
	return (int) a / (int) b;
}
int modul(double a , double b)
{
	return (int)a % (int)b;
}
double power(double a, double b){
	return pow(a,b);
}
double sine(double a) {
	return sin(a*(3.14159265358979323846/180));
}
double cosine(double a) {
	return cos(a*(3.14159265358979323846/180));
}
void outs(string s, double a) // This function will output the value described in the string.
{
	cout << s << " " << a << endl;
}
