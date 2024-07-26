
#include <iostream>
#include <string>
#include <cmath>


using namespace std;



int main() {
    // Declare 
	int i, option, counter, o, loginAttempt;
	float side,length,width,height,radius, volume, surface;
    string prompt1, prompt2, prompt3, username, code, optionContinue, password;
    
    
    volume = 0;
    loginAttempt = 0;
    counter = 1;
    prompt1 ="PLEASE ENTER A CORRECT USERNAME AND PASSWORD TO ACCESS THE CALCULATOR. The system will shut down if the user enters an  invalid password or username three times.";
    prompt2 = "Username:";
    prompt3 = "Password: ";
    
	while (counter > 0) {
        cout << prompt1 << endl;
        
        
        while (loginAttempt < 3) {
        	cout << prompt2 << endl;
            cin >> username;
            cout << prompt3 << endl;
            cin >> password;
            if (username == "AIMN" && password == "77355") {
                loginAttempt = loginAttempt + 9;
            } else {
                cout << "invalid login attempt" << endl;
                loginAttempt = loginAttempt + 1;
                if (loginAttempt == 2) {
                    cout << "WARNING!!! Last Attempt before the program will be terminated.!!!" << endl;
                }
                if (loginAttempt == 3) {
                    cout << "Too many login attempts! The program will now terminate." << endl;
                    return 0;
                }
            }
        }
        
        // PROMPT THE LIST OF 3D GEOMETRY
        cout << "WELCOME to 3D GEOMETRY CALCULATOR" << endl;
        cout << "3D GEOMETRY LIST:" << endl;
        cout << "1.[A]- CUBE" << endl;
        cout << "2.[B]- RECTANGLE SOLID" << endl;
        cout << "3.[C]- SPHERE" << endl;
        cout << "4.[D]- RIGHT CIRCULAR CYLINDER" << endl;
        cout << "5.[E]- RIGHT CIRCULAR CONE" << endl;
        cout << "6.[F]- SQUARE PYRAMID" << endl;
        cout << "7.[G]- REGULAR TETRAHEDRON" << endl;
        cout << "Please enter a 3D Geometry Code: " << endl;
        cin >> code;
        while (!(code == "A" || code == "B" || code == "C" || code == "D" || code == "E" || code == "F" || code == "G")) {
            cout << "Invalid code! Enter a valid code:" << endl;
            cin >> code;
        }
        cout << "PRESS[1]- To calculate volume." << endl;
        cout << "PRESS[2]- To calculate surface area" << endl;
        cout << "Please select one of the two options above: " << endl;
        cin >> option;
        if (code == "A") {
            
            // READ SIDE OF CUBE
            cout << "Enter side of CUBE:" << endl;
            cin >> side;
            
            // FORMULA TO CALCULATE volume of CUBE
            volume = pow(side,3);
            
            // FORMULA TO CALCULATE area surface of CUBE
            surface = 6 * pow(side,2);
            if (option == 1) {
                cout << "The volume of CUBE is " << endl;
                cout << volume << endl;
            } else {
                cout << "The surface area of CUBE is " << endl;
                cout << surface << endl;
            }
        } else {
            if (code == "B") {
                
                // READ LENGTH OF RECTANGLE SOLID
                cout << "Enter length of RECTANGLE SOLID:" << endl;
                cin >> length;
                cout << "Enter width of RECTANGLE SOLID:" << endl;
                cin >> width;
                cout << "Enter height of RECTANGLE SOLID:" << endl;
                cin >> height;
                
                // FORMULA TO CALCULATE volume of RECTANGLE SOLID
                volume = (length * width * height);
                
                // FORMULA TO CALCULATE area surface of RECTANGLE SOLID
                surface = (2 * length * width) +( 2 * length * height)+ (2*width * height);
                if (option == 1) {
                    cout << "The volume of RECTANGLE SOLID is" << endl;
                    cout << volume << endl;
                } else {
                    cout << "The surface area of RECTANGLE SOLID is " << endl;
                    cout << surface << endl;
                }
            } else {
                if (code == "C") {
                    
                    // READ RADIUS of SPHERE
                    cout << "Enter radius of SPHERE:" << endl;
                    cin >> radius;
                    
                    // FORMULA TO CALCULATE volume of SPHERE
                    volume = 4*(M_PI)*(pow(radius,2))/3;
                    
                    // FORMULA TO CALCULATE surface area of SPHERE
                    surface =4*M_PI*pow(radius,2);
                    if (option == 1) {
                        cout << "The volume of SPHERE is" << endl;
                        cout << volume << endl;
                    } else {
                        cout << "The surface area of SPHERE is" << endl;
                        cout << surface << endl;
                    }
                } else {
                    if (code == "D") {
                        
                        // "Enter radius of RIGHT CIRCULAR CYLINDER:"
                        cout << "Enter radius of RIGHT CIRCULAR CYLINDER:" << endl;
                        cin >> radius;
                        
                        // READ HEIGHT of RIGHT CIRCULAR CYLINDER
                        cout << "Enter height of RIGHT CIRCULAR CYLINDER:" << endl;
                        cin >> height;
                        
                        // FORMULA TO CALCULATE volume of RIGHT CIRCULAR CYLINDER
                        volume = M_PI*pow(radius,2)*height;
                        
                        // FORMULA TO CALCULATE surface area of RIGHT CIRCULAR CYLINDER
                        surface = (2*M_PI*radius*height) + (2*M_PI*pow(radius,2));
                        if (option == 1) {
                            cout << "The volume OF RIGHT CIRCULAR CYLINDER is " << endl;
                            cout << volume << endl;
                        } else {
                            cout << "The surface area of RIGHT CIRCULAR CYLINDER is " << endl;
                            cout << surface << endl;
                        }
                    } else {
                        if (code == "E") {
                            
                            // RADIUS of RIGHT CIRCULAR CONE
                            cout << "Enter radius of RIGHT CIRCULAR CONE:" << endl;
                            cin >> radius;
                            
                            // HEIGHT of RIGHT CIRCULAR CONE
                            cout << "Enter height of RIGHT CIRCULAR CONE:" << endl;
                            cin >> height;
                            
                            // FORMULA TO CALCULATE volume of RIGHT CIRCULAR CONE
                            volume = M_PI*pow(radius,2)*height/3;
                            
                            // FORMULA TO CALCULATE surface of RIGHT CIRCULAR CONE
                            surface =  M_PI*radius*(sqrt(pow(radius,2)+pow(height,2)))+(M_PI*pow(radius,2));
                            if (option == 1) {
                                cout << "The volume of RIGHT CIRCULAR CONE is " << endl;
                                cout << volume << endl;
                            } else {
                                cout << "The surface area of RIGHT CIRCULAR CONE is " << endl;
                                cout << surface << endl;
                            }
                        } else {
                            if (code == "F") {
                                
                                // READ SIDE of SQUARE PYRAMID
                                cout << "Enter side of SQUARE PYRAMID:" << endl;
                                cin >> side;
                                
                                // HEIGHT of SQUARE PYRAMID
                                cout << "Enter height of SQUARE PYRAMID:" << endl;
                                cin >> height;
                                
                                // FORMULA TO CALCULATE volume of SQUARE PYRAMID
                                volume =  (side * side * height / 3);
                                
                                // /FORMULA TO CALCULATE surface of SQUARE PYRAMID
                                surface = side * (side + sqrt(((pow(side,2))+(4*pow(height,2)))));
                                if (option == 1) {
                                    cout << "The volume of SQUARE PYRAMID is " << endl;
                                    cout << volume << endl;
                                } else {
                                    cout << "The surface area of SQUARE PYRAMID is " << endl;
                                    cout << surface << endl;
                                }
                            } else {
                                
                                // READ SIDE OF REGULAR TETRAHEDRON
                                cout << "Enter side of REGULAR TETRAHEDRON:" << endl;
                                cin >> side;
                                if (option == 1) {
                                    
                                    // FORMULA TO CALCULATE volume of REGULAR TETRAHEDRON
                                    volume = (pow(2*pow(side,3),0.5)/12);
                                    cout << "The volume of REGULAR TETRAHEDRON is " << endl;
                                    cout << volume<< endl;
                                } else {
                                	// FORMULA TO CALCULATE surface of REGULAR TETRAHEDRON
                                    surface =  sqrt(3) *pow(side,2);
                                    cout << "The surface area of REGULAR TETRAHEDRON is " << endl;
                                    cout << surface << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << "PRESS [ANY KEYS] to continue the process " << endl;
        cout << "PRESS [Z] to exit the program" << endl;
        cin >> optionContinue;
        if (optionContinue == "Z") {
            cout << "THANK YOU FOR USING THE CALCULATOR  " << endl;
            cout << "Byee (^3^)/ (^3^)/ (^3^)/ (^3^)/" << endl;
            return 0;
        } else {
            cout << "Loading..." << endl;
            cout << "..." << endl;
            cout << "..." << endl;
            cout << "..." << endl;
            counter = counter + 1;
        }
    }
    return 0;
}



