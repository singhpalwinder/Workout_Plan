/*before running this program make sure you change the numbers in all body part 
txt files to fit your 1 rep max for those exercises */

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


//Names of exercises
vector<string> chestExercises;
vector<string> backExercises;
vector<string> shouldersExercises;
vector<string> legsExercises;

//1 rep max for exercises 
vector<double> chestNumbers;
vector<double> backNumbers;
vector<double> shouldersNumbers;
vector<double> legsNumbers;


void getData()
{
 fstream myData;
 string chestFile =  "Chest.txt";
 string legsFile = "Legs.txt";
 string backFile = "Back.txt";
 string shouldersFile = "Shoulders.txt";


 string data, data1;
 double numbers;

 //open chest file 
 myData.open(chestFile, ios::in);
    
    if(!myData)
    {
        cout << "Error opening " << chestFile << ".\n";
    }


    while(getline(myData,data, '='))
    {       
        chestExercises.push_back(data);
        
        myData >> data1;
    
        numbers = stod(data1);

        chestNumbers.push_back(numbers);
    }
    myData.close();
 //open back file

 myData.open(backFile, ios::in);
    
    if(!myData)
    {
        cout << "Error opening " << backFile << ".\n";
    }


    while(getline(myData,data, '='))
    {       
        backExercises.push_back(data);
        
        myData >> data1;
    
        numbers = stod(data1);

        backNumbers.push_back(numbers);
    }

    myData.close();
  //open legs file
  myData.open(legsFile, ios::in);
    
    if(!myData)
    {
        cout << "Error opening " << legsFile << ".\n";
    }


    while(getline(myData,data, '='))
    {       
        legsExercises.push_back(data);
        
        myData >> data1;
    
        numbers = stod(data1);

        legsNumbers.push_back(numbers);
    }
    myData.close();

 //open shoulders file 
 myData.open(shouldersFile, ios::in);
    
    if(!myData)
    {
        cout << "Error opening " << shouldersFile << ".\n";
    }


    while(getline(myData,data, '='))
    {       
        shouldersExercises.push_back(data);
        
        myData >> data1;
    
        numbers = stod(data1);

        shouldersNumbers.push_back(numbers);
    }
    myData.close();

}
void hypertrophyWorkouts() //write hypertrophy program for all body parts
{
    ofstream outputFile;
    double intensity[3] = {.75, .80, .85};
    
    
    //write hypertrophy chest program

    outputFile.open("Hypertrophy_Chest.txt", ios::out);

    for(int i =0; i < chestExercises.size(); i++)
    {
        outputFile << chestExercises[i] << ":\n";

        for(int j = 0; j < 3;)
        {
            outputFile << "Set: " << ++j << "\n";
            outputFile << "Weight: " << chestNumbers[i] * intensity[j-1] << "\n";
            outputFile << "Reps: 8-12\n\n";
            
        }
    }
    outputFile.close();

 //write back workout program 

    outputFile.open("Hypertrophy_Back.txt", ios::out);

    for(int i =0; i < backExercises.size(); i++)
    {
        outputFile << backExercises[i] << ":\n";

        for(int j = 0; j < 3;)
        {
            outputFile << "Set: " << ++j << "\n";
            outputFile << "Weight: " << backNumbers[i] * intensity[j-1] << "\n";
            outputFile << "Reps: 8-12\n\n";
            
        }
    }
    outputFile.close();

    //write legs workout program

    outputFile.open("Hypertrophy_Legs.txt", ios::out);

    for(int i =0; i < legsExercises.size(); i++)
    {
        outputFile << legsExercises[i] << ":\n";

        for(int j = 0; j < 3;)
        {
            outputFile << "Set: " << ++j << "\n";
            outputFile << "Weight: " << legsNumbers[i] * intensity[j-1] << "\n";
            outputFile << "Reps: 8-12\n\n";
            
        }
    }
    outputFile.close();

    //write shoulders workout program 

    outputFile.open("Hypertrophy_Shoulders.txt", ios::out);

    for(int i =0; i < shouldersExercises.size(); i++)
    {
        outputFile << shouldersExercises[i] << ":\n";

        for(int j = 0; j < 3;)
        {
            outputFile << "Set: " << ++j << "\n";
            outputFile << "Weight: " << shouldersNumbers[i] * intensity[j-1] << "\n";
            outputFile << "Reps: 8-12\n\n";
            
        }
    }
    outputFile.close();
}
void powerWorkouts() //write power program for all body parts
{
    ofstream outputFile;
    double intensity[3] = {.80, .85, .90};
    string reps = "3-6\n\n";
    
    //write hypertrophy chest program

    outputFile.open("Power_Chest.txt", ios::out);

    for(int i =0; i < chestExercises.size(); i++)
    {
        outputFile << chestExercises[i] << ":\n";

        for(int j = 0; j < 3;)
        {
            outputFile << "Set: " << ++j << "\n";
            outputFile << "Weight: " << chestNumbers[i] * intensity[j-1] << "\n";
            outputFile << "Reps: " << reps;
            
        }
    }
    outputFile.close();

 //write back workout program 

    outputFile.open("Power_Back.txt", ios::out);

    for(int i =0; i < backExercises.size(); i++)
    {
        outputFile << backExercises[i] << ":\n";

        for(int j = 0; j < 3;)
        {
            outputFile << "Set: " << ++j << "\n";
            outputFile << "Weight: " << backNumbers[i] * intensity[j-1] << "\n";
            outputFile << "Reps: " << reps;
            
        }
    }
    outputFile.close();

    //write legs workout program

    outputFile.open("Power_Legs.txt", ios::out);

    for(int i =0; i < legsExercises.size(); i++)
    {
        outputFile << legsExercises[i] << ":\n";

        for(int j = 0; j < 3;)
        {
            outputFile << "Set: " << ++j << "\n";
            outputFile << "Weight: " << legsNumbers[i] * intensity[j-1] << "\n";
            outputFile << "Reps: " << reps;
            
        }
    }
    outputFile.close();

    //write shoulders workout program 

    outputFile.open("Power_Shoulders.txt", ios::out);

    for(int i =0; i < shouldersExercises.size(); i++)
    {
        outputFile << shouldersExercises[i] << ":\n";

        for(int j = 0; j < 3;)
        {
            outputFile << "Set: " << ++j << "\n";
            outputFile << "Weight: " << shouldersNumbers[i] * intensity[j-1] << "\n";
            outputFile << "Reps: " << reps;
            
        }
    }
    outputFile.close();
}
void updateOneRepMax()
{
    vector<double> repsDone;
    fstream postWorkoutFile;
    string search = "Reps:", data;
    double reps, goal = 6;

    postWorkoutFile.open("Power_Chest.txt", ios::in);

    if(!postWorkoutFile)
    {
        cout << "Error opening post chest workout file.\n";
    }


    while(postWorkoutFile >> data)
    {
        
        
        if(data == "Reps:")
        {
            postWorkoutFile >> data;

            reps = stod(data);
            repsDone.push_back(reps);

        }
    }

    cout << "\n\n";

    for(int i = 0; i < repsDone.size(); i++)
    {
        cout << repsDone[i] << endl;
    }

    cout << "\n\n";

    
    



}
int main()
{
    int choice;
    

    cout << "What program would you like?\n";
    cout << "Choices:\n\n";
    cout << "1. Hypertrophy\n";
    cout << "2. Power\n";
    cout << "3. Update one rep max\n";
    cin >> choice;

    switch(choice)
    {
        case 1: getData();
                hypertrophyWorkouts();
                break;
        case 2: getData();
                powerWorkouts();
                break;
        case 3: updateOneRepMax();
                break;

    default : main();

    }
    return 0;
}