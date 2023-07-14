//use this to include libaries note this is just one library and there is a whole bunch

#include <iostream>
#include <string>



//use this to put all of your code in 

int main(){

}

//use this to print items

std::cout<<"Hello World";

//use this to declare intiger variables

int x=1;

//use this to declare decimal variables 

float y= 1.1;

//use this to declare string variables 
std::string name;

//use this to declare boolean variables 

z=true;

w=false;

//use this to take in user input 

std::cin>> name;


//use this for conditionals

if(x<1){
    std::cout<<"your number is a decimal or negative number";
}

else if(x=>1){
    std::cout<<"your number is a postive number with the possibility of a decimal"
}

else{
std::cout<<"Something wrong happend"
}

//use this for loops

for(int i; i>5; i++){
    std::cout<<"here is a for loop printed five times";
}


//use this for functions

#include<iostream>

helloworld();

int main(){

}

void helloworld(){
    std::cout<<"hello world";
}


//example project one even number counter:

#include <iostream>

int main() {
    int number;

    std::cout << "Please enter a number: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Your number is negative." << std::endl;
    }
    else {
        std::cout << "Your number is positive." << std::endl;
    }

    std::cout << "Even numbers up to " << number << ": ";
    for (int i = 2; i <= number; i += 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}


//use this for  swtich cases in c++

switch(number){
    case '1':
    std::cout<<"your number is one";
    break;

    case '2':
    std::cout<<"your number is two";
    break;

    case '3':
    std::cout<<"your number is three";
    break;

    defualt:
    std:cout<<"enter a valid number please";
    break;
}

//use this for nested control flow:

#include <iostream>

int main() {
    for (int i = 1; i <= 5; ++i) {
        std::cout << "Iteration " << i << std::endl;

        int number;
        std::cout << "Enter a number: ";
        std::cin >> number;

        if (number % 2 == 0) {
            std::cout << number << " is even." << std::endl;
        } else {
            std::cout << number << " is odd." << std::endl;
        }
    }

    return 0;
}

//use this for do loops 

int main(){

do{
    std::cout<<"hello world";
}

}

//use this for a do-while loop


int main(){
    int i=1;
    int ans;
    cout::std<<"Hi type in a number pls";
    cout::cin>>ans;

    do{
        std::cout<<"thanks for typing in a number"
    }while(ans !=i);

}

//little side note this is how to set stuff not equal
!=

//use this for array decleration

int numbers[5]={1,2,3,4,5};
//note you would treat this as you would a variable

//use this to specify an array element

numbers[4]

//use this to change an arrays value

numbers[4]=10;

//use this to loop for an array 
for (int i = 0; i < 5; i++) {
    std::cout << numbers[i] << " ";  // Displaying each element
}

//use this to decalare a class
class myclass{
    
}

//in classes you can have a public and a private

class sidsclass{
    public:
    std::cout<<"Public can be used anywhere in the code";
    private:
    std::cout<<"However Private cannot be used anywhere in the code";
}

//You can defin class objects to use through out the code
int main(){
    object sidsclass;
}

//Additonally you can define functions in classes note double expects a return value while void doesnt

class sidsclass2{
    public:
    void myfunction(){
        std::cout<<"Hello World";
    }
}
//and you can call them anywher upon defining and object

int main(){
    sidsclass2 obj;

    obj.myfunction();
}
//example project 1 multiply two numbers function

#include <iostream>

// Function declaration
void multiply();

int main() {
    multiply();

    return 0;
}

void multiply() {
    int a;
    int b;

    std::cout << "Please enter the first number: ";
    std::cin >> a;

    std::cout << "Please enter the second number: ";
    std::cin >> b;

    std::cout << "Your first number was " << a << std::endl;
    std::cout << "Your second number was " << b << std::endl;

    std::cout << "The product of the two numbers is: " << a * b << std::endl;
}


//example project 2 grade feedback
#include<iostream>

int main() {
	char grade;

	std::cout << "Please Enter your grade in the form A,B,C,D,F";

	std::cin >> grade;

	switch (grade) {

	case 'D':
		std::cout << "You Did indeed pass but you need to rethink some choices.";
		break;
	case 'F':
		std::cout << "As steven he said and i quote FAILURE be prepared for what happens next.";
		break;
	case 'C':
		std::cout << "At least its not a D but come on man get at least a B";
		break;
	case 'B':
		std::cout << "You got this man push for an A";
		break;
	case 'A':
		std::cout << "Great job me and steven he are proud of you";
			break;
	default:
		std::cout << "please enter a valid grade";
		break;


	}

	return 0;
}

//example project 3 random number guesser

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Generate a random number
    srand(static_cast<unsigned int>(time(0)));
    int num = rand() % 100 + 1;

    int ans;
    do {
        std::cout << "Please guess a number between 1-100: ";
        std::cin >> ans;

        std::cout << "Oops, your guess is wrong." << std::endl;

        // Incrementing the number by 3 doesn't seem necessary, so you can remove this line:
        // num + 3;

    } while (ans != num);

    std::cout << "Wow, congratulations! You guessed it right." << std::endl;

    return 0;
}

//example project five array adding code

#include <iostream>

int main() {
    int numbers[5] = { 0 };

    std::cout << "Give me five numbers and I will add them up for you." << std::endl;
    std::cout << "Give me your first number: ";
    std::cin >> numbers[0];
    std::cout << "Give me your second number: ";
    std::cin >> numbers[1];
    std::cout << "Give me your third number: ";
    std::cin >> numbers[2];
    std::cout << "Give me your fourth number: ";
    std::cin >> numbers[3];
    std::cout << "Give me your fifth number: ";
    std::cin >> numbers[4];

    std::cout << "Your first number is " << numbers[0] << std::endl;
    std::cout << "Your second number is " << numbers[1] << std::endl;
    std::cout << "Your third number is " << numbers[2] << std::endl;
    std::cout << "Your fourth number is " << numbers[3] << std::endl;
    std::cout << "Your fifth number is " << numbers[4] << std::endl;

    int sum = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];
    std::cout << "The sum is " << sum << std::endl;

    return 0;
}

//example project 6 student management system uses classes:
#include <iostream>
#include <string>

class student {
public:
    int studentnum;
    int studentgrade1;
    int studentgrade2;
    int studentgrade3;
    std::string name;

    void namesetter() {
        std::cout << "Please Enter Student's name: ";
        std::cin >> name;
    }

    void stdntnumsetter() {
        std::cout << "Please Enter Student's number: ";
        std::cin >> studentnum;
    }

    void stdntgrades() {
        std::cout << "Please enter Student's Grade #1: ";
        std::cin >> studentgrade1;
        std::cout << "Please enter Student's Grade #2: ";
        std::cin >> studentgrade2;
        std::cout << "Please enter Student's Grade #3: ";
        std::cin >> studentgrade3;
    }

    void results() {
        std::cout << "Student's Name: " << name << std::endl;
        std::cout << "Student's Number: " << studentnum << std::endl;
        std::cout << "Student's Grade #1: " << studentgrade1 << std::endl;
        std::cout << "Student's Grade #2: " << studentgrade2 << std::endl;
        std::cout << "Student's Grade #3: " << studentgrade3 << std::endl;
    }
};

int main() {
    student obj;
    char options;

    std::cout << "Welcome to the Student Management System" << std::endl << std::endl;

    while (true) {
        std::cout << "Please select an option from the menu (1, 2, 3, 4): ";
        std::cin >> options;

        switch (options) {
        case '1':
            obj.namesetter();
            break;

        case '2':
            obj.stdntnumsetter();
            break;

        case '3':
            obj.stdntgrades();
            break;

        case '4':
            obj.results();
            break;

        default:
            std::cout << "Invalid option. Please try again." << std::endl;
            break;
        }
    }

    return 0;
}

