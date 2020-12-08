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
    void FillArray(int[]);
    bool GoAgain();
    void PrintArray(int[]);
    int  Random();
    int  RandomAsk();
    void SeedGenerator(unsigned int);
    void SumofArray(int[]);
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
        FillArray(dataArray);

        PrintArray(dataArray);

        SumofArray(dataArray);
    
        } while(GoAgain() == true); // do

        return 0;
    } // Function main()
// =====================

//  ===========
//  FillArray()
//  ===========
    void FillArray(int arrayData[ROWS_IN_ARRAY][COLUMNS_IN_ARRAY]) {
        int row, col;
        row = col = 0;
        while (row < ROWS_IN_ARRAY) {
            while (col < COLUMNS_IN_ARRAY) {
                arrayData[row][col] = Random();
                col++;
            }  // while
            row++;
            col = 0;
        }  // while
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
    void PrintArray(int arrayData[ROWS_IN_ARRAY][COLUMNS_IN_ARRAY]) {

        int row, col;

        cout << "The random numbers are" << endl;
        row = col = 0;
        while (row < ROWS_IN_ARRAY) {
            while (col < COLUMNS_IN_ARRAY) {
                cout << arrayData[row][col] << " ";
                col++;
            }  // while
            row++;
            col = 0;
            cout << endl;
        }  // while
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
    void SumofArray(int summedArrays[ROWS_IN_ARRAY][COLUMNS_IN_ARRAY]) {

        int row, col;
        int sum;
       
        sum = 0;

        for (int row = 0; row < 10; row++) {
            for (col = 0; col < 10; col++) {
                sum = sum + summedArrays[row][col];
            } // for
        } // for

        cout << endl << endl << "Sum of the random numbers is " << sum << endl;
    }  // Function SumofArray()
//  ===========================