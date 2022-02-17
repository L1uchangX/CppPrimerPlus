#include <iostream>

// 3.7.1
// asks for your height in integer inches and then converts your height to feet and inches.
void inch2feet()
{
	using namespace std;

	const int inch_pre_feet = 12;
	int inch;

	cout << "Enter your height in inch:___\b\b\b";
	cin >> inch;
	cout << "Your height is " << inch / inch_pre_feet << " feet " << inch % inch_pre_feet << " inch." << endl;
}

// 3.7.2
// asks for your height in feet and inches and your weight in pounds.
// 1 foot = 12 inches, 1 inch = 0.0254 meter, 1 kilogram = 2.2 pound.
// compute your BMI by dividing your mass in kilograms by the square of your height in meters.
void BMI()
{
	using namespace std;

	const int inch_pre_feet = 12;
	const float meter_pre_inch = 0.0254;
	const float pound_pre_kilogram = 2.2;

	int height_feet, height_inch;
	float weight_pound;

	cout << "Enter you height in feet:";
	cin >> height_feet;
	
	cout << "Enter you height in inch:";
	cin >> height_inch;
	
	cout << "Enter you weight in pound:";
	cin >> weight_pound;

	float height = (height_feet * inch_pre_feet + height_inch) * meter_pre_inch;
	float weight = weight_pound * (1.0/pound_pre_kilogram);
	float BMI = weight / (height * height);

	cout << "Your height is " << height << " meters.\n";
	cout << "Your weight is " << weight << " kilogram.\n";
	cout << "Your BMI is " << BMI << "\n";

}

// 3.7.3
// enter a latitude in degrees, minutes,and seconds that displays the latitude in decimal format.
// 60 seconds of arc to a minute and 60 minutes of arc to a degree;
void decimalLonglatitude()
{
	using namespace std;

	const int second_pre_minute = 60;
	const int minute_pre_degree = 60;
	int degrees, minutes, seconds;

	cout << "Enter a latitude in degrees, minutes, and seconds:\n";

	cout << "First, enter the degrees:";
	cin >> degrees;

	cout << "Next, enter the minutes of arc:";
	cin >> minutes;

	cout << "Finally, enter the seconds of arc:";
	cin >> seconds;

	float totalMinutes = seconds/second_pre_minute + minutes;
	float totalDegrees = totalMinutes/minute_pre_degree + degrees;

	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << totalDegrees << " degrees" << endl;
}

// 3.7.4
// enter the number of seconds as an integer value (use type long, or, if available, long long)
// displays the equiva lent time in days, hours, minutes,and seconds.
void seconds2days()
{
	using namespace std;

	const int hour_pre_day = 24;
	const int minute_pre_hour = 60;
	const int second_pre_minute = 60;

	constexpr int second_pre_day = hour_pre_day * minute_pre_hour * second_pre_minute;
	constexpr int second_pre_hour = minute_pre_hour * second_pre_minute;

	long int totalSeconds;

	cout << "Enter the number of seconds:";
	cin >> totalSeconds;

	int days = totalSeconds / second_pre_day;
	int hours = (totalSeconds % second_pre_day) / second_pre_hour;
	int minutes = (totalSeconds % second_pre_hour) / second_pre_minute;
	int seconds = totalSeconds % second_pre_minute;

	cout << totalSeconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
}

// 3.7.5
// enter the current world population and the current population of a nation of your choice.
// display percent that the nation population is of the world's population.
void populationPrecent()
{
	using namespace std;
	
	long long int worldPopulation, nationPopulation;

	cout << "Enter the world's population:";
	cin >> worldPopulation;

	cout << "Enter the population of a nation:";
	cin >> nationPopulation;

	// convert long long int to float then execute divide
	float precent = (nationPopulation * 1.0f) / worldPopulation;
	
	cout << "The population of the nation is " << precent * 100 << "% of the world population." << endl;
}

// 3.7.6
// enter how many miles you driven and how many gallons of gasoline you used.
// report miles pre gallon car has gotten.
// if prefer report in liters pre 100 kilometers.
void fuelConsume()
{
	using namespace std;
	const float liters_pre_gallon = 3.875;
	const float kilometers_pre_mile = 1.6093;

	float distance, gasoline;
	cout << "Enter driven distance in miles: ";
	cin >> distance;

	cout << "Enter gasoline consume in gallons: ";
	cin >> gasoline;

	float miles_pre_gallon = distance / gasoline;	// MPG (miles per gallon)
	float liters_pre_km = (distance * kilometers_pre_mile) / (gasoline * liters_pre_gallon);
	float liters_pre_100km = (1.0 / liters_pre_km) * 100;

	cout << "The MPG of your car is: " << miles_pre_gallon << "mpg." << endl;

	cout << "The 100km of your car gasoline consume is: " << liters_pre_100km << "l/100km." << endl;

}

int main()
{
	//inch2feet();
	//BMI();
	//decimalLonglatitude();
	//seconds2days();
	//populationPrecent();
	fuelConsume();
}