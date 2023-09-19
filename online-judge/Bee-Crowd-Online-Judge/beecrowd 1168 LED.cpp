#include<iostream>
using namespace std;
int main()
{
    int t,led=0;
    int length;
    string input_number;
    cin>>t;
    while(t--){
        cin>>input_number;
        led=0;

        for(int i=0;i<input_number.length();i++){

                if(input_number[i]=='1'){
                    led+=2;
                }
                else if(input_number[i]=='2'||input_number[i]=='3'||input_number[i]=='5'){
                    led+=5;
                }
                else if(input_number[i]=='4'){
                        led+=4;
                }
                else if(input_number[i]=='6'||input_number[i]=='9'||input_number[i]=='0'){
                    led+=6;
                }
                else if(input_number[i]=='7'){
                    led+=3;
                }
                else if(input_number[i]=='8'){led+=7;}
        }
        cout<<led<<" leds"<<endl;
    }return 0;
}
