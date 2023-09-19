#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;

    if(ch>='A' && ch<='Z'){

        ch += 32;


    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"this character is vowel and it is: "<<ch<<endl;
    }
    else{
        cout<<"this character is consonant and it is: "<<ch<<endl;
    }
    }
    else cout<<"Enter value is not character"<<endl;

    return 0;
}
