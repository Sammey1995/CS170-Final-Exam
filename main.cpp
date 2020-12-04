//  ====================
     #include <iostream>
    using namespace std;
//  ====================

//  =====================
//  Constant Declarations
//  ==================================
    const int MIN_RANDOM_NUMBER =   0;
    const int MAX_RANDOM_NUMBER = 100;
//  ==================================

//  ===================
//  Function Prototypes
//  ===================
    void InitializeGenerator(unsigned int);
    int  RandomNumber();
//  ====================

//  ============
    int main() {

        int ii, nbTosses;
        int nbTails, nbHeads;

        srand(1);
        InitializeGenerator(2);

        
        return 0;
    } // Function main()
// =====================

//  =============================================
    void InitializeGenerator(unsigned int seed) {

        srand(seed);

    } // Function InitializeGenerator()
//  ===================================

//  =======================
//  Function RandomNumber()
//
//  1) The Function rand() generated integers between
//  zero and 2147483647.
//  ====================
    int RandomNumber() {

        int ranValue;

        ranValue = MIN_RANDOM_NUMBER +
            rand() % (MAX_RANDOM_NUMBER - MIN_RANDOM_NUMBER + 1);

        return ranValue;
    } // Function RandomNumber()
// =============================