#include<iostream>
#include<vector>
using namespace std;
int main(){
    //Declaring an empty vector of integers
    vector<int>patientAges;

    //Adding elements to the vector using push_back()
    patientAges.push_back(25);  
    patientAges.push_back(30);
    patientAges.push_back(45);
    patientAges.push_back(50);
    patientAges.push_back(60);

    //Number of patients 
    cout<<"Number of Patients: "<<patientAges.size()<<endl;

    //Accessing vector elements using square brackets []
    cout<<"First Patient's Age: "<<patientAges[0]<<endl;

    //Accessing vector elements using at() function
    cout<<"Third Patient's Age: "<<patientAges.at(2)<<endl;

    //Accessing the last element in a vector
    cout<<"Last Patient's Age: "<<patientAges.back()<<endl;

    //Updating an element in the vector using square brackets []
    patientAges[1]=46;
    cout<<"Updated Second Patient's Age: "<<patientAges[1]<<endl;

    //Updating using a loop
    for(int &herAge : patientAges){
       if(herAge == 50){
           herAge = 51; //Updating age 50 to 51
       }
    }
    cout<<"Updated Fourth Patient's Age: "<<patientAges[3]<<endl;   

    //Declaration and initialization of a vector with values
    vector<int>initialAges={25,30,45,50,60};

    //Displaying all initial patient ages
    cout<<"Initial Ages: ";
    for(int myAge : initialAges){
        cout<<myAge<<" ";
    }


    //Displaying the size of the vector
    cout<<"Initial Ages Size: "<<initialAges.size()<<endl;

    //Traversing the vector using range-based for loop
   for(int age : patientAges){
        cout<<age<<endl;
    }
    

    //Remove the last element of the vector using pop_back()
    initialAges.pop_back();
    for(int yourAge : initialAges){
        cout<<yourAge<<endl;
    }

    //Checking if the vector is empty using empty() function
    cout<<"Is the vector empty? "<<(initialAges.empty() ? "Yes" : "No")<<endl;  
    return 0;
}