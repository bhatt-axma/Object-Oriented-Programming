#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of elements: ";
	cin>>n;

	if(n<=0)
	{
		cout<<"Number of elements must be greater than zero.\n";
		return 1;
	}

	double value;
	double sum=0;
	double sum_squares=0;
	double min_value, max_value;

	//READ FIRST VALUE TO INITIALISE MIN AND MAX
	cout<<"Enter value @1: ";
	cin>>value;
	sum=value;
	sum_squares+=value*value;
	min_value=max_value=value;

	//READ THE REMAINING VALUES
	for(int i=2;i<=(n);i++)
	{
		cout<<"Enter value @"<<i<<": ";
		cin>>value;
		sum+=value;
		sum_squares+=value*value;

		if(value<min_value)
		 min_value=value;
		if(value>max_value)
		 max_value=value;
	}

	double average = sum / n;
	double range = max_value - min_value;
	double std_dev = 0.0;

	// Check if n > 1 to calculate Sample Standard Deviation (avoids division by zero)
	if (n > 1)
	{
		// Formula for Sample Standard Deviation (uses n-1)
        // Variance (s^2) = (Sum(x^2) - n * average^2) / (n - 1)
        // Standard Deviation (s) = sqrt(Variance)
		std_dev = sqrt((sum_squares - n * average * average) / (n - 1));
	}
	// If n = 1, standard deviation is 0.0, which is initialized above.

	cout<<fixed<<setprecision(3);
	cout<<"\nRange of values: "<<range;

    // Specify Sample Standard Deviation in output for clarity
	cout<<"\nSample Standard deviation: "<<std_dev;

	return 0;
}
