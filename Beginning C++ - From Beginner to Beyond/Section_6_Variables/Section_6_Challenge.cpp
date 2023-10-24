/*
 * Section 6 challenge
	 Frank's Carpet Cleaning Service
	 Charges:
			Price per small room: 25
			Price per big room: 35
	 Sales tax: 6%
	 Estimates are valid for 30 days
	
*/

#include <iostream>

using namespace std;

int main()
{
	
	const float big_room_price {35.00};
	const float small_room_price {25.00};
	const int number_days_before_expiration {30};
	
	int big_rooms {0};
	int small_rooms {0};
	
	// Ask user how many small/big/rooms
	cout << "Number of small rooms: ";
	cin >> small_rooms;
	
	cout << "Number of big rooms: ";
	cin >> big_rooms;
	
	// Tell customer of price
	cout << "Price per small room: " << small_room_price << endl;
	cout << "Price per big room: " << big_room_price << endl;
	
	// Calculate the total
	int total = (small_room_price * small_rooms) + (big_room_price * big_rooms);
	cout << "Total: " << total << endl;
	
	// Calculate the tax
	float tax = total *.06;
	cout << "Tax: " << tax << endl;
	
	// Spacer
	cout << "=================================================" << endl;
	
	// Tell customer the total price with tax
	float total_with_tax = total + tax;
	cout << "Total Estimate: " << total_with_tax << endl;
	
	// Let customer know how of the price quote expiration date
	cout << "The estimate is valid for " << number_days_before_expiration << " days." << endl;
	
	return 0;
	
}
