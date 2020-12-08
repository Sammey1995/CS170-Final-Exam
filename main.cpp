//  ====================
     #include <iostream>
    using namespace std;
//  ====================

//  =====================
//  Constant Declarations
//  ==================================
    const int MIN_RANDOM_NUMBER =   0;
    const int MAX_RANDOM_NUMBER = 100;
    const int COLUMNS_IN_ARRAY  =  10;
    const int ROWS_IN_ARRAY     =  10;
//  ==================================

//  ===================
//  Function Prototypes
//  ===================
    void FillArray(int[][]);
    bool GoAgain();
    void PrintArray(int[][], int);
    int  Random();
    int  RandomAsk();
    void SeedGenerator(unsigned int);
    void SumofArray(int[][], int);
//  ============================

//  ===============
//  Function main()
//  ===============
//  Notes:
//  1) This is the main function.
//  =============================
    int main() {

        int numOfNums;
        int dataArray[ROWS_IN_ARRAY][COLUMNS_IN_ARRAY];
        
        do {
        SeedGenerator(1);
        numOfNums = RandomAsk();
        FillArray(dataArray, numOfNums);

        PrintArray(dataArray, numOfNums);

        SumofArray(dataArray, numOfNums);
    
        } while(GoAgain() == true); // do

        return 0;
    } // Function main()
// =====================

//  ===========
//  FillArray()
//  ===========
    void FillArray(int arrayData[][]) {
        for (int ii = 0; ii < numOfNums; ii++) {
            arrayData[ii] = Random();
        }  // for
    }  // FillArray()
//  =================

//  ==================
//  Function GoAgain()
//  ==================
//  Notes:
//  1) A simple booleen function that returns
//     true if you would like to go again, or
//     false if you want to discontinue.
//  2) Requests user input.
//  ================
    bool GoAgain() {

        char verdict;

            do {
                cout << "Would you like to go again? (y/n) ==> ";
                cin >> verdict;
                cout << endl;
                if (verdict == 'y') 
                    return true;
                else if (verdict == 'n')
                cout << "Program Execution Terminating..." << endl << endl;
                cout << "See you next time!" << endl;
                    return false;
            } while (verdict == 'y' || 'n'); // do
    } // Function GoAgain()
//  =======================

//  ============
//  PrintArray()
//  ============
    void PrintArray(int arrayData[], int numOfNums) {

        cout << "The random numbers are" << endl;
        for (int ii = 0; ii < numOfNums; ii++) {
            cout << arrayData[ii] << " ";
        }  // for
    }  // PrintArray()
//  ==================

//  =================
//  Function Random()
//
//  1) The Function rand()
//  generated integers between
//  zero and 2147483647.
//  ====================
    int Random() {

        int ranValue;

        ranValue = MIN_RANDOM_NUMBER +
            rand() % (MAX_RANDOM_NUMBER - MIN_RANDOM_NUMBER + 1);

        return ranValue;
    } // Function RandomNumber()
// =============================

//  ===========
//  RandomAsk()
//  ===========
    int RandomAsk() {

        int num;

        cout << "How many random numbers would you like ";
        cin >> num;
        cout << endl;

        return num;
    }  // RandomAsk()
//  =================

//  ===============
//  SeedGenerator()
//  ===============
    void SeedGenerator(unsigned int seed) {

        srand(seed);

    } // Function InitializeGenerator()
//  ===================================

//  =====================
//  Function SumofArray()
//  =====================================
    void SumofArray(int summedArrays[], int numOfNums) {

        int sum;

        sum = 0;
        for (int ii = 0; ii < numOfNums; ii++) {
            sum = sum + summedArrays[ii];
        }  // for
        cout << endl << endl << "Sum of the random numbers is " << sum << endl;
    }  // Function SumofArray()
//  ===========================