//Dana Beggins
//Program to count the vowels contained in a given string.

#include <iostream>
using namespace std;

void input(string&);
int count(string);
int main()
{
   string s;

   //input
   input(s);
 
   //processing
   int vowels = count(s);

   //output
   cout << "Vowels: " << vowels << endl;

   return 0;
}

void input(string& s)
{
   cout << "Enter a string: ";
   getline(cin, s);
}

int count(string s)
{
   int i, counter = 0;
   char vow[5] = {'a', 'e', 'i', 'o', 'u'};
   for (i=0; i<s.length(); i++)
   {		
	for (int j=0; j<5; j++)
	{
	   if (s.at(i) == vow[j])
	   {
		counter++;
	   }
	}
   }
   return counter;
}
