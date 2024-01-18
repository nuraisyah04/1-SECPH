#include <iostream>
using namespace std;

//Define method calc_BMR to calculate BMR
double calc_BMR(char gender, double height, double weight, int age)
{
	double result_BMR;
	
	if (gender == 'M' || gender == 'm' )
	result_BMR = (weight * 10) + (height * 6.25) - (age * 5) + 5;
	
	else if (gender == 'F' || gender == 'f')
	result_BMR = (weight * 10) + (height * 6.25) - (age * 5) - 161;
	
	return result_BMR;
} 

int main()
{
	//Initialise
   int age;
   char gender;
   double height;
   double weight;
   double BMR;
   char other_data;
	
   //Header output 
   cout << "Basal Metabolic Rate (BMR) Calculator \n\n";
   
   //Loop to repeat the calculator
   do
   {
   	 		//Getting valid age input
 		  	do
 	    	{
 	    	cout << "Age [15-80]: ";
    		cin >> age;
    		} while (age < 15 || age > 80);
	    	
			//Getting valid gender input
			do
			{
    	    cout << "Gender [F @ M]: ";
        	cin >> gender;
    		} while (gender != 'F' && gender != 'M' && gender != 'f' && gender != 'm' );
    	
    		//Getting height input 
    		cout << "Height (cm): ";
    		cin >> height;
    	
    		//Getting weight input
    		cout << "Weight (kg): ";
    		cin >> weight;
    		
    		//Getting new line
    		cout << "\n";
    	
			//invoke method: calc_BMR
			BMR =  calc_BMR(gender, height, weight, age);
		
			//Getting BMR output
			printf("BMR = %.2f Calories/ day (using Mifflin-St Jeor Equation) \n\n", BMR);
		
			//Getting header output
			cout << "Daily calorie needs based on activity level \n\n";
	
			//Arithmetic operations
			int sedentary = BMR * 1.2;
			int exercise_1_3_times = BMR * 1.375;
			int exercise_4_5_times = BMR * 1.465;
			int daily_exercise = BMR * 1.55;
			int intense_exercise = BMR * 1.725;
			int very_intense_exercise = BMR * 1.9;
		
			//Getting header output
			cout << "Activity Level \t\t\t\t\t\t\tCalorie \n";
    		cout << "Sedentary: little or no exercise \t\t\t\t"<< sedentary << "\n";
    		cout << "Exercise 1-3 times/week \t\t\t\t\t"<< exercise_1_3_times << "\n";
    		cout << "Exercise 4-5 times/week \t\t\t\t\t" << exercise_4_5_times << "\n";
    		cout << "Daily exercise or intense exercise 3-4 times/week \t\t"<< daily_exercise << "\n";
    		cout << "Intense exercise 6-7 times/week \t\t\t\t"<< intense_exercise << "\n";
    		cout << "Very intense exercise daily, or physical job  \t\t\t"<< very_intense_exercise << "\n\n";
    
    		//Getting message output
    		cout << "Exercise: 15-30 minutes of elevated heart rate activity. \n";
    		cout << "Intense exercise: 45-120 minutes of elevated heart rate activity.\n";
    		cout << "Very intense exercise: 2+ hours of elevated heart rate activity.\n\n";
    	
    		//Getting other data input
    		cout << "Do you want to enter other data? [Y @ N]: ";
    		cin >> other_data;
    }while (other_data == 'Y' || other_data == 'y');
   
    //Getting new line
    cout << "\n";
    
    //Getting message output
    cout << "Thank you :)";
	return 0;
}
