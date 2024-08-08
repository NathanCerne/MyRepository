#include<iostream>
#include<climits>
using namespace std;

//forward declaration of the program's functions
double getMean(const int arrayInput[], int size);
int getLow(int arrayInput[], int size);
int getHigh(int arrayInput[], int size);

int main(){
  const int arrayLength = 15;//set size of array to 15
  int myArray[arrayLength];//create the array

  //ask user to input values into the array
  std::cout<<"Input "<<arrayLength<<" integers"<<std::endl;
  for(int i = 0; i < arrayLength; i++){
    std::cin >> myArray[i];
    std::cout<<"integer number "<< i+1<<" entered"<<std::endl;
  }

  //Get the mean and output it
  int myMean = getMean(myArray, arrayLength);
  std::cout<<"the mean is "<<myMean<<std::endl;

  //Get the lowest integer and output it
  int myLow = getLow(myArray, arrayLength);
  std::cout<<"the lowest value is "<<myLow<<std::endl;

  //Get the highest integer and output it
  int myHigh = getHigh(myArray, arrayLength);
  std::cout<<"the highest value is "<<myHigh<<std::endl;

  //end main()
  return 0;
}

double getMean(const int arrayInput[], int size){
  //create integer to store sum of all elements
  int sum = 0;

  //Add the elements of the array
  for(int j = 0; j < size; ++j){
    sum += arrayInput[j];
  }

  //calculate the mean and return it
  return static_cast<double>(sum)/size;
}

int getLow(int arrayInput[], int size){
  //create integer to store lowest value, initialized with the maximum integer in C++
  int low = INT_MAX;

  //Loop through the array comparing values
  for(int t = 0; t < size; t++){
    if(arrayInput[t] < low){
      low = arrayInput[t];
    }
  }

  //return the lowest value
  return low;
}

int getHigh(int arrayInput[], int size){
  //create integer to store highest value, initialized with the minimuminteger in C++
  int high = -INT_MAX;

  //Loop through the array comparing values
  for(int f = 0; f < size; f++){
    if(arrayInput[f] > high){
      high = arrayInput[f];
    }
  }

  //return the highest value
  return high;
}
