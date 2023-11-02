// Section 10 Challenge
/*
 * Write a program that asks a user to enter a secret message.
 *  
 * Encrypt this message using the substitution cipher and display the encypted messsage.
 * Then decrypted the encrypted message back to the original message.
 * 
 * You may use the 2 strings below for your substitution. For example, to encrypt you can
 * replace the character at position n in alphabet with the character at position n in key.
 * 
 * To decrypt you can replace the character at position n in key with the character at position
 * n in alphabet.
 * 
 * 
*/

#include <iostream>
#include <cstring>
#include <cctype>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	// Declare 2 strings and initialize to empty
	string message{};
	string encrypted_message{};
	string codes{"lKjDeF9127456GHIaBC083!@MnO#PQrs$%^"};
	char input{};
	
	while(true){
		
		cout << "S: Send a message\n";
		cout << "E: Encrypt the message\n";
		cout << "Q: Quit the cipher\n\n";
		
		cout << "Choose an option: ";
		cin >> input;
		// Ignore \n in buffer, if \n present in buffer, getline() will receive that char as input
		// Creates unwanted behavior
		cin.ignore();
		if(input == 'Q' or input == 'q'){
			cout << "\n\nSee ya later!" << endl;
			break;
		}
		if(input == 'S' or input == 's'){
			message.clear();
			cout << "Enter your message: ";
			getline(cin, message);
			cout << "\nEntered messsage: " << message << "\n\n";
		}
		else if(input == 'E' or input == 'e'){
			if(message.empty()){
				cout << "Need to send a message first! Try again and press S or s.\n" << endl;
				continue;
			}
			cout << "\nOriginal message: " << message << endl;
			// Do something to encrypt the message
			
			// Split message in half, swap, replace ' ' with '*', set first char to '!'
			int message_length = message.length();
			string first_half = message.substr(0, (message_length/2) + 1);
			string second_half = message.substr((message_length/2) + 1, message_length/2);
			first_half.swap(second_half);
			encrypted_message = first_half + second_half;
			encrypted_message.replace(0, 1, 1, '!');
			replace(encrypted_message.begin(), encrypted_message.end(), ' ', '*');
			
			unsigned int i{0};
			for(char c: encrypted_message){
				if(isalpha(c)){
					encrypted_message.at(i) = codes.at(i);
				}
				i++;
			}

			cout << "\nEncrypted message: " << encrypted_message << "\n\n";
		}
		else{
			cout << "\n Unknown entry. Try again!" << endl;
		}
	}
	
	
	
	
	
	return 0;
}
