// John Grillo
// CS 161; cs161assn3.cpp
//Sources: I had a fair amount of help from tutors, namely Pamela from Rock Creek and James from Sylvania.
// Hard assignment. Though there were less tantrums and hair pulling than last week. This went from hard to me to just plain uber hard.

#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declaring variables. Char are for yes-or-no questions, doubles are for passenger types and in. variables are for vehicle types.
	char isDriver;
//	char isBiker;
//	char isDisabled;
	char driveAge;
	
//	double passCount;
	double adultCount;
	double youthCount;
	double seniorCount;
	double bikeCount;

//	double youthPrice;
//	double adultPrice;
//	double seniorPrice;
//	double bikeCharge;
	double total = 0;

	char vehicleHeight76;
	int vehicleLength;
//	int vehicleUnder20L;
//	int vehicleOver20L;
//	int vehicleUnder40;

	cout << "Welcome to John Grillo's Fare Calculator" << endl;
	cout << "Are you driving a vehicle onto the ferry (y/n)?" << endl;
	cin >> isDriver;
	
	//--------------------------------gather input---------------------------------------------
	//asking about their driving. Nest vehicle information in here?
	if (isDriver == 'y')
	{
		cout << "Is the driver a senior citizen (65 or over) or disabled (y/n)?" << endl; 
		cin >> driveAge;

		cout << "How many passengers in your vehicle (excluding the driver)? " << endl;

		cout << "Adults (age 19 to 64):___"  << endl;
		cin >> adultCount;
		total += (adultCount * 13.15);
			
		cout << "Senior Citizens (65 or older) or Disabled Persons:___" << endl;
		cin >> seniorCount;
		total += (seniorCount * 6.55);

		cout << "Youth (5 to 18 years old):___" << endl;
		cin >> youthCount;
		total += (youthCount * 10.55);

		cout <<	"Is your vehicle over 7 feet, 6 inches in height (y/n)?" << endl; 
		cin >> vehicleHeight76;

		if (vehicleHeight76 == 'y')
		{
			total += 51.20;
			cout << "How long is your vehicle in feet?" << endl;
			cin >> vehicleLength;

			if (vehicleLength < 20 && driveAge == 'n')
			{ 
				 total += 51.20; 
			}
			else if (vehicleLength < 20 && driveAge == 'y')
			{
				 total += 44.60;
			}

			//going to include/copy section of vehicles with length's greater than 30' below. Not sure if this section includes it???
			if (vehicleLength <= 30 && vehicleLength > 20 && vehicleHeight76 == 'n')
			{ 
				total += 76.80;
			}
			else if (vehicleLength <= 30 && vehicleLength > 20 && vehicleHeight76 == 'y')
			{ 
				total += 102.4;
			}
			else if (vehicleLength > 30  && vehicleLength < 40 )
			{ 
				total += 204.80;
			}
			else if (vehicleLength >= 40)
			{
				cout << "Vehicle prohibited from entry. Sorry for the inconvenience." << endl;
			}
			//remove in-between commented sections above???
		} 

		else if (vehicleHeight76 == 'n')
		{
			cout << "How long is your vehicle in feet?" << endl;
			cin >> vehicleLength;
			  			 
			if (vehicleLength <= 30 && vehicleLength > 20 && vehicleHeight76 == 'n')
			{ 
				total += 76.80;
			}
			else if (vehicleLength <= 30 && vehicleLength > 20 && vehicleHeight76 == 'y')
			{ 
				total += 153.60;
			}
			else if (vehicleLength > 30  && vehicleLength < 40 )
			{ 
				total += 204.80;
			}
			else if (vehicleLength >= 40)
			{
				cout << "Vehicle prohibited from entry. Sorry for the inconvenience." << endl;
			}
		}
	}

	
	//**************************Calculations independent of car*********************************************
	if(isDriver == 'n')
	{
		cout << "Adults (age 19 to 64):___"  << endl;
		cin >> adultCount;
		if (adultCount >= 0)
		{
			total += (adultCount * 13.15);
		}

		cout << "Senior Citizens (65 or older) or Disabled Persons:___" << endl;
		cin >> seniorCount;
		if (seniorCount >= 0)
		{
			total += (seniorCount * 6.55);
		}

		cout << "Youth (5 - 18 years old):___" << endl;
		cin >> youthCount;
		if (seniorCount >= 0)
		{
			total += (youthCount * 10.55);
		}


		cout << "How many people in your group are traveling with a bicycle?" << endl;
		cin >> bikeCount;
			total += (bikeCount * 4.00);
		}

	//this is my end line.
	cout << "Your total fare is: $" << total << endl;
	cout <<	"Thank you for using John Grillo's Fare Calculator." << endl;

	system("pause");
	return 0;
}


