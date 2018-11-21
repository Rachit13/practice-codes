
#include<iostream>
using namespace std;
void number_palindrome(int num);
void string_palindrome(char text[50]);
int main()
{
  int choice,num;
  string text2;
  char text[50];
  do
  {
  cout<<"\n\nMENU:"<<"\n1.Number palindrome\n2.String palindrome \n\nEnter choice:\n";
  cin>>choice;
  
  switch(choice)
  {
  	case 1: cout<<"\nEnter number:";
			cin>>num;
			number_palindrome(num);
			break;
	case 2: cout<<"\nEnter string:";
			cin>>text;
			string_palindrome(text);
			break;
	default: cout<<"\nEnter option between 1-2:";
			break;
	}
	}while(choice<=2);
	
	return 0;
}

void number_palindrome(int num)
{
  int temp,rev=0,num2;
  num2=num;
  while(num!=0)
  {
    temp=num%10;
	rev=rev*10+temp;
	num=num/10;
  }
  if(rev==num2)
  	cout<<"\nNumber is a palindrome";
else
	cout<<"\nNumber is not a palindrome";
}

void string_palindrome(char text[50])
{
 int length=0,begin,mid,end;
 while(text[length]!=0)
 	++length;
 end=length-1;
 mid=length/2;
 for(begin=0;begin<mid;begin++)
  {
  	if(text[begin] != text[end])
	 {
	    cout<<"\nString is not a palindrome";
		break;
	 }
	 end--;
   }
  if(begin==mid)
   cout<<"\nString is a paindrome";
 }

			

