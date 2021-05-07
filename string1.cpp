#include<iostream>
#include<string>
using namespace std;
int main()
{
string z;
string str="madam";
string::reverse_iterator it;   //it is a pointer variable;
for(it=str.rbegin();it!=str.rend();it++){
z=*it;
cout<<z;
}
if(str.compare(z)==0)
         cout<<endl<<"yes it is a  pindrome ";
else
          cout<<endl<<"! palindrome";
}
