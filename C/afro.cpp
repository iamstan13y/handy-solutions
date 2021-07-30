#include <iostream>

using namespace std;

class education
{
	char name[10];
	public : disp()
	{
		cout<<"hie";
	}
};
	class school : public education 
	{
		public : void dsip()
		{
			cout<"shjti";
		}
	};
	
int main()
{
	school s;
	s.disp();
return 0;
}
