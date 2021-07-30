#include <iostream> 

using namespace std; 

string one[] = { "", "one ", "two ", "three ", "four ", 
				"five ", "six ", "seven ", "eight ", 
				"nine ", "ten ", "eleven ", "twelve ", 
				"thirteen ", "fourteen ", "fifteen ", 
				"sixteen ", "seventeen ", "eighteen ", 
				"nineteen " }; 


string ten[] = { "", "", "twenty ", "thirty ", "forty ", 
				"fifty ", "sixty ", "seventy ", "eighty ", 
				"ninety " }; 

string numToWords(int n, string s) 
{ 
	string str = ""; 
	
	if (n > 19) 
		str += ten[n / 10] + one[n % 10]; 
	else
		str += one[n]; 

	if (n) 
		str += s; 

	return str; 
} 

string convertToWords(long n) 
{ 

	string out; 

	out += numToWords((n / 10000000), "million "); 


	out += numToWords(((n / 100000) % 100), "hundred thousand "); 


	out += numToWords(((n / 1000) % 100), "thousand "); 


	out += numToWords(((n / 100) % 10), "hundred "); 

	if (n > 100 && n % 100) 
		out += "and "; 

	out += numToWords((n % 100), ""); 

	return out; 
} 


int main() 
{ 

	int amount; 
	cout<<"Enter amount to convert:\n";
	cin>>amount;
	
	if (amount > 0 || isdigit(amount))
	{
		cout <<"Pula "<<convertToWords(amount)<<endl; 	
	}
	else
	{
		cout<<"Wrong Input";
	}
	return 0; 
} 

