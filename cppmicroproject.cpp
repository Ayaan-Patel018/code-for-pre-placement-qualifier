#include<iostream>
using namespace std;
int logicalSkills() {
    int score = 0;
    int answer;
    cout << "\n=== Logical Skills Section ===" << endl;
    cout << "Q1. What comes next in the sequence: 2, 4, 8, 16, ?\n";
    cout << "1. 32  2. 30  3. 24  4. 20" << endl;
    cout << "Enter your answer (1-4): ";
    cin >> answer;
    if (answer == 1){
    score=score+4;
    }
    else{
    score--;
    }
    cout << "\nQ2. A is the brother of B. B is the father of C. How is A related to C?\n";
    cout << "1. Father  2. Brother  3. Uncle  4. Cousin" << endl;
    cout << "Enter your answer (1-4): ";
    cin >> answer;
    if (answer == 3){
    score=score+4;
    } else{
    score--;   
    }
    return score;
}
int communicationSkills() {
    int score = 0;
    string response;
    cout << "\n=== Communication Skills Section ===" << endl;
    cout << "Q1. Fill in the blank: She _ to the market yesterday.\n";
    cout << "Enter the correct word: ";
    cin >> response;
    if (response == "went" || response == "Went"){
    score=score+4;
    }  
    else{
    score--;
    }
    cout << "\nQ2. Choose the correct sentence:\n";
    cout << "1. I goes to the gym.\n";
    cout << "2. I go to the gym.\n";
    cout << "Enter your answer (1 or 2): ";
    cin >> response;
    if (response == "2"){
    score=score+4;
    }
    else{
    score--;
    } 
    return score;
}
int technicalSkills() {
    int score = 0;
    int answer;
    cout << "\n=== Technical Skills Section ===" << endl;
    cout << "Q1. What is the time complexity of binary search?\n";
    cout << "1. O(n)  2. O(log n)  3. O(n^2)  4. O(n log n)" << endl;
    cout << "Enter your answer (1-4): ";
    cin >> answer;
    if (answer == 2){
    score=score+4;
    }  
    else{
    score--;
    } 
    cout << "\nQ2. Which data structure uses FIFO (First In, First Out) principle?\n";
    cout << "1. Stack  2. Queue  3. Tree  4. Graph" << endl;
    cout << "Enter your answer (1-4): ";
    cin >> answer;
    if (answer == 2){
    score=score+4;
    }  
    else{
    score--;
    } 
    return score;
}
 int main(){   
    int totalScore = 0, choice;
    cout<<"---------------------------------------------------------------------------------- "<<endl;
    cout<<"                             PRE-PLACEMENT QUALIFIER                               "<<endl;
    cout<<"---------------------------------------------------------------------------------- "<<endl;
    cout<<"INSTRUCTIONS:\n";
    cout<<"this test has 3 sections :\n";
    cout<<"1. Logical Skills\n";
    cout<<"2. Communication skills :\n";
    cout<<"3. Technical ";
    cout << "Each section has 2 questions. You will be scored based on correct answers.\n";

    do {
        cout << "\nSelect a section to attempt:\n";
        cout << "1. Logical Skills\n";
        cout << "2. Communication Skills\n";
        cout << "3. Technical Skills\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                totalScore += logicalSkills();
                break;
            case 2:
                totalScore += communicationSkills();
                break;
            case 3:
                totalScore += technicalSkills();
                break;
            case 4:
                cout << "Exiting test..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    cout<<"---------------------------------------------------------------------------------- "<<endl;
    cout<<"                             FINAL REPORT                               "<<endl;
    cout<<"---------------------------------------------------------------------------------- "<<endl;
   
    cout << "\nYour total score is: " << totalScore << " out of 24" << endl;
    if (totalScore >= 18) {
        cout << "Congratulations! You passed the Pre-Placement Qualifier Test .\n";
    } else {
        cout << "You did not pass the Pre-Placement Qualifier. Better luck next time!\n";
    }
    return 0;  
}
