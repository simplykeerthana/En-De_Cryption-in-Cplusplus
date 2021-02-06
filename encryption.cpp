#include <iostream>
#include <string.h>

using namespace std;

// a struct function with reusable variables.
struct encryption{

    char encryp[200]; // array to store the message if encryption is chosen
    char decryp[200]; //like zac efron
    int key; //to shift like 6, 4, 5, so if encryption is chosen and the key is 3, zac efron will be encrypted to CDF HIURQ. 
    char msg[200]; // entered by users

};

int main()
{
    struct encryption e; // new object of encryption
    char ch;
    int option,i;

    cout << "\n---------------------------------------------------\n";
    cout << "\n--------------| SECURITY MATTERS|-------------\n";
    cout << "\n----------------encryp-to-decryp---------------------\n";

    do{
    cout << "\n Please Enter your choice: ";
    cout << "\n 1. Encryption \t 2. Decryption \t 0. exit\n";
    cin >> option;

    switch(option)
    {
        case 1: // to encrypt a text message
    			cout<<"\nEnter the encryption key\n";
    			cin>>e.key;
    			fflush(stdin);
    			cout<<"Please enter your message:\n";
    			cin.get(e.msg,200);
    			
    			//hello there   key=2
    			cout<<"\nCiphertext is:\n";
    			for(i=0;i<strlen(e.msg);i++)
    			{
    				e.encryp[i]=e.msg[i]+e.key; // shifts each character by the key to the right
    				cout<<e.encryp[i];
				}	
    			break;
    			
    	case 2:
    			cout<<"\nEnter the key:";
    			cin>>e.key;
    			fflush(stdin);
    			cout<<"\nEnter the message:";
    			cin.get(e.msg,200);
    			cout<<"\nPlaintext is:\n";
    			for(i=0;i<strlen(e.msg);i++)
    			{
    				e.decryp[i]=e.msg[i]-e.key; // shifts each character by the key to the left
    				cout<<e.decryp[i];
				}
    			break; 			
    	case 0:
    			exit(0);
    			break;				
    				
    	default:
    		    cout<<"\nWrong input,try 1,2,0\n";

    }
        cout << "\n Do you want to continue... y or Y";
        cin >> ch;
        system("CLS");
    }while (ch=='y' || ch == 'Y');
    {
       cout << "\n See ya";
    }
	
}
