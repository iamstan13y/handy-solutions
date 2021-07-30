#include <iostream>

using namespace std; 
  
void checkPassword(string password) 
{ 
    int n = password.length(), j;      
    char specialChars[] = {'!', '@', '#', '$', '%', '^', '&', '*', '?', '/'};
    bool hasSpecialChar = false, hasUpper = false, hasLower= false, hasDigit = false; 
    
    for (int i = 0; i < n; i++) 
	{ 
        if (isdigit(password[i])) 
            hasDigit = true;
			 
        for (j = 0; j < 10; j++)
        {
        	if (password[i] == specialChars[j])
        	{
        		hasSpecialChar = true;
        		break;
			}
		}
		
		if (isupper(password[i]))
		{
			hasUpper = true;
		}
		
		if (islower(password[i]))
		{
			hasLower = true;
		}
		
    } 
    
    cout << "Password strength: "; 
    
    if ( hasUpper && hasDigit && hasLower && (n >= 6) && hasSpecialChar) 
        cout << "Strong" << endl; 
    else if (!(hasLower || hasUpper) && hasDigit && (n <5)) 
        cout << "Weak" << endl; 
    else if ((hasLower || hasUpper) && (n < 5))
        cout << "Very Weak" << endl; 
} 
  
 
int main() 
{
    string password;   
	cout << "Enter your password:"<<endl;
	cin>>password;
    
	checkPassword(password); 
    return 0; 
}
