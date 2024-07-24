#include<bits/stdc++.h>
using namespace std;

void Encrypt(char a[25])
{
    int key;
    cout<<"Enter your key for encryption :- "<<endl;
    cin>>key;
    for (char i = 0; (i < 25 && a[i]!='\0'); i++)
    {
        a[i]+=key;  // Shift each character in the string by 'key' positions
    }
    cout<<"Your data is encrypted :- "<<a<<endl;
}

void Decrypt(char a[25])
{
    int key;
    cout<<"Enter your key for decryption :- "<<endl;
    cin>>key;
    for (char i = 0; (i < 25 && a[i]!='\0'); i++)
    {
        a[i]-=key;  // Reverse the encryption by shifting characters back
    }
    cout<<"Your data is decrypted :- "<<a<<endl;
}

int main(){
    int choice;
    char name[25], m;
    
    do {
        cout<<"Enter your input :-"<<endl;
        cin>>name;  // Input the string to be encrypted/decrypted

        cout<<"Press 1 -> for Encrypt :- "<<endl;
        cout<<"Press 2 -> for Decrypt :- "<<endl;
        cin>>choice;  // Select encryption or decryption

        switch (choice)
        {
        case 1:
            Encrypt(name);  // Call Encrypt function for encryption
            break;
        case 2:
            Decrypt(name);  // Call Decrypt function for decryption
            break;
        default:
            cout<<"Invalid input"<<endl;  // Handle invalid choices
        }

        cout<<"\nDo you want to execute more times? Type yes/no :- "<<endl;
        cin>>m;  // Ask user if they want to continue

    } while (m != 'n' && m != 'N');  // Continue loop if input is not 'no' or 'N'

    return 0;
}
