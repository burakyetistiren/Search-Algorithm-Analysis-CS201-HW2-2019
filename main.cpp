#include <iostream>
//#include <cstdlib>
using namespace std;
#include <ctime>


int binarySearch( int* arr, int N, int value )
{
    int low = 0, high = N - 1;

    while ( low <= high )
    {
        int mid = (low + high) / 2;

        if ( arr[ mid ] < value )
            low = mid + 1;

        else if ( arr[ mid ] > value )
            high = mid - 1;

        else
            return mid;
    }
    return -1;
}


int sequentialSearch( int* arr, int N, int value )
{
    for ( int i = 0; i < N; i++)
    {
        if ( arr[i] == value )
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    //initializing array one
    int size_one = 1000;
    int *arr_one = new int[size_one];

    for ( int i = 0; i < size_one; i++)
        arr_one[i] = i;

    //initializing array two
    int size_two = 10000;
    int *arr_two = new int[size_two];

    for ( int i = 0; i < size_two; i++)
        arr_two[i] = i;

    //initializing array three
    int size_three = 100000;
    int *arr_three = new int[size_three];

    for ( int i = 0; i < size_three; i++)
        arr_three[i] = i;

    //initializing array four
    int size_four = 1000000;
    int *arr_four = new int[size_four];

    for ( int i = 0; i < size_four; i++)
        arr_four[i] = i;

    //initializing array five
    int size_five = 10000000;
    int *arr_five = new int[size_five];

    for ( int i = 0; i < size_five; i++)
        arr_five[i] = i;

    //initializing array six
    int size_six = 100000000;
    int *arr_six = new int[size_six];

    for ( int i = 0; i < size_six; i++)
        arr_six[i] = i;

    //initializing array seven
    int size_seven = 385000000;
    int *arr_seven = new int[size_seven];

    for ( int i = 0; i < size_six; i++)
        arr_seven[i] = i;


    double duration;
    clock_t startTime1 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 50000; i++)
        sequentialSearch( arr_one, size_one, size_one / 10);
    //------------------------------------------------------------------------------------


    duration = 1000 * double( clock() - startTime1 ) / CLOCKS_PER_SEC;
    cout << "Execution took " <<  duration / 50000  << " milliseconds "  << endl;


    double duration2;
    clock_t startTime2 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 50000; i++)
       sequentialSearch( arr_one, size_one, size_one / 2);
    //------------------------------------------------------------------------------------

    duration2 = 1000 * double( clock() - startTime2 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration2 / 50000 << " milliseconds." << endl;


    double duration3;
    clock_t startTime3 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 10000; i++)
       sequentialSearch( arr_one, size_one, size_one - size_one / 10);
    //------------------------------------------------------------------------------------

    //Compute the number of seconds that passed since the starting time
    duration3 = 1000 * double( clock() - startTime3 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration3 / 10000 << " milliseconds." << endl;


    double duration4;
    clock_t startTime4 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 10000; i++)
       sequentialSearch( arr_one, size_one, size_one * 1.1);
    //------------------------------------------------------------------------------------

    //Compute the number of seconds that passed since the starting time
    duration4 = 1000 * double( clock() - startTime4 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration4 / 10000 << " milliseconds." << endl << endl;


    double duration5;
    clock_t startTime5 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 10000; i++)
       sequentialSearch( arr_two, size_two, size_two / 10);
    //------------------------------------------------------------------------------------

    //Compute the number of seconds that passed since the starting time
    duration5 = 1000 * double( clock() - startTime5 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration5 / 10000 << " milliseconds." << endl;


    double duration6;
    clock_t startTime6 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000; i++)
       sequentialSearch( arr_two, size_two, size_two / 2);
    //------------------------------------------------------------------------------------

    //Compute the number of seconds that passed since the starting time
    duration6 = 1000 * double( clock() - startTime6 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration6 / 1000 << " milliseconds." << endl;


    double duration7;
    clock_t startTime7 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000; i++)
       sequentialSearch( arr_two, size_two, size_two - size_two / 10);
    //------------------------------------------------------------------------------------

    //Compute the number of seconds that passed since the starting time
    duration7 = 1000 * double( clock() - startTime7 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration7 / 1000 << " milliseconds." << endl;


    double duration8;
    clock_t startTime8 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000; i++)
       sequentialSearch( arr_two, size_two, size_two - size_two * 1.1);
    //------------------------------------------------------------------------------------

    //Compute the number of seconds that passed since the starting time
    duration8 = 1000 * double( clock() - startTime8 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration8 / 1000 << " milliseconds." << endl << endl;


    double duration9;
    clock_t startTime9 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000; i++)
       sequentialSearch( arr_three, size_three, size_three / 10);
    //------------------------------------------------------------------------------------

    //Compute the number of seconds that passed since the starting time
    duration9 = 1000 * double( clock() - startTime9 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration9 / 1000 << " milliseconds." << endl;


    double duration10;
    clock_t startTime10 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000; i++)
       sequentialSearch( arr_three, size_three, size_three / 2);
    //------------------------------------------------------------------------------------

    //Compute the number of seconds that passed since the starting time
    duration10 = 1000 * double( clock() - startTime10 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration10 / 1000 << " milliseconds." << endl;


    double duration11;
    clock_t startTime11 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000; i++)
       sequentialSearch( arr_three, size_three, size_three - size_three / 10);
    //------------------------------------------------------------------------------------

    //Compute the number of seconds that passed since the starting time
    duration11 = 1000 * double( clock() - startTime11 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration11 / 1000 << " milliseconds." << endl;


    double duration12;
    clock_t startTime12 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000; i++)
       sequentialSearch( arr_three, size_three, size_three * 1.1);
    //------------------------------------------------------------------------------------

    //Compute the number of seconds that passed since the starting time
    duration12 = 1000 * double( clock() - startTime12 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration12 / 1000 << " milliseconds." << endl << endl;


    double duration13;
    clock_t startTime13 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 100; i++)
       sequentialSearch( arr_four, size_four, size_four / 10);
    //------------------------------------------------------------------------------------

    //Compute the number of seconds that passed since the starting time
    duration13 = 1000 * double( clock() - startTime13 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration13 / 100 << " milliseconds." << endl;


    double duration14;
    clock_t startTime14 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 100; i++)
       sequentialSearch( arr_four, size_four, size_four / 2);
    //------------------------------------------------------------------------------------

    //Compute the number of seconds that passed since the starting time
    duration14 = 1000 * double( clock() - startTime14 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration14 / 100 << " milliseconds." << endl;


    double duration15;
    clock_t startTime15 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 100; i++)
       sequentialSearch( arr_four, size_four, size_four - size_four / 10);
    //------------------------------------------------------------------------------------

    //Compute the number of seconds that passed since the starting time
    duration15 = 1000 * double( clock() - startTime15 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration15 / 100 << " milliseconds." << endl;


    double duration16;
    clock_t startTime16 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 100; i++)
       sequentialSearch( arr_four, size_four, size_four * 1.1);
    //------------------------------------------------------------------------------------

    //Compute the number of seconds that passed since the starting time
    duration16 = 1000 * double( clock() - startTime16 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration16 / 100 << " milliseconds." << endl << endl;


    double duration17;
    clock_t startTime17 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 10; i++)
       sequentialSearch( arr_five, size_five, size_five / 10);
    //------------------------------------------------------------------------------------

    duration17 = 1000 * double( clock() - startTime17 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration17 / 10 << " milliseconds." << endl;


    double duration18;
    clock_t startTime18 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 10; i++)
       sequentialSearch( arr_five, size_five, size_five / 2);
    //------------------------------------------------------------------------------------

    duration18 = 1000 * double( clock() - startTime18 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration18 / 10 << " milliseconds." << endl;


    double duration19;
    clock_t startTime19 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 10; i++)
       sequentialSearch( arr_five, size_five, size_five - size_five / 10);
    //------------------------------------------------------------------------------------

    duration19 = 1000 * double( clock() - startTime19 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration19 / 10 << " milliseconds." << endl;


    double duration20;
    clock_t startTime20 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 10; i++)
       sequentialSearch( arr_five, size_five, size_five * 1.1);
    //------------------------------------------------------------------------------------

    duration20 = 1000 * double( clock() - startTime20 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration20 / 10 << " milliseconds." << endl << endl;


    double duration21;
    clock_t startTime21 = clock();

    //Code block--------------------------------------------------------------------------
       sequentialSearch( arr_six, size_six, size_six / 10);
    //------------------------------------------------------------------------------------

    duration21 = 1000 * double( clock() - startTime21 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration21 << " milliseconds." << endl;


    double duration22;
    clock_t startTime22 = clock();

    //Code block--------------------------------------------------------------------------
       sequentialSearch( arr_six, size_six, size_six / 2);
    //------------------------------------------------------------------------------------

    duration22 = 1000 * double( clock() - startTime22 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration22 << " milliseconds." << endl;


    double duration23;
    clock_t startTime23 = clock();

    //Code block--------------------------------------------------------------------------
       sequentialSearch( arr_six, size_six, size_six - size_six / 10);
    //------------------------------------------------------------------------------------

    duration23 = 1000 * double( clock() - startTime23 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration23 << " milliseconds." << endl;


    double duration24;
    clock_t startTime24 = clock();

    //Code block--------------------------------------------------------------------------
       sequentialSearch( arr_six, size_six, size_six * 1.1);
    //------------------------------------------------------------------------------------

    duration24 = 1000 * double( clock() - startTime24 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration24 << " milliseconds." << endl << endl;


    double duration25;
    clock_t startTime25 = clock();

    //Code block--------------------------------------------------------------------------
       sequentialSearch( arr_seven, size_seven, size_seven / 10);
    //------------------------------------------------------------------------------------

    duration25 = 1000 * double( clock() - startTime25 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration25 << " milliseconds." << endl;


    double duration26;
    clock_t startTime26 = clock();

    //Code block--------------------------------------------------------------------------
       sequentialSearch( arr_seven, size_seven, size_seven / 2);
    //------------------------------------------------------------------------------------

    duration26 = 1000 * double( clock() - startTime26 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration26 << " milliseconds." << endl;


    double duration27;
    clock_t startTime27 = clock();

    //Code block--------------------------------------------------------------------------
       sequentialSearch( arr_seven, size_seven, size_seven - size_seven / 10);
    //------------------------------------------------------------------------------------

    duration27 = 1000 * double( clock() - startTime27 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration27 << " milliseconds." << endl;


    double duration28;
    clock_t startTime28 = clock();

    //Code block--------------------------------------------------------------------------
       sequentialSearch( arr_seven, size_seven, size_seven * 1.1);
    //------------------------------------------------------------------------------------

    duration28 = 1000 * double( clock() - startTime28 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration28 << " milliseconds." << endl << endl;


    double duration29;
    clock_t startTime29 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_one, size_one, size_one / 10);
    //------------------------------------------------------------------------------------

    duration29 = 1000 * double( clock() - startTime29 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration29 / 1000000<< " milliseconds." << endl;


    double duration30;
    clock_t startTime30 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_one, size_one, size_one / 2);
    //------------------------------------------------------------------------------------

    duration30 = 1000 * double( clock() - startTime30 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration30 / 1000000<< " milliseconds." << endl;


    double duration31;
    clock_t startTime31 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_one, size_one, size_one - size_one / 10);
    //------------------------------------------------------------------------------------

    duration31 = 1000 * double( clock() - startTime31 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration31 / 1000000<< " milliseconds." << endl;


    double duration32;
    clock_t startTime32 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_one, size_one, size_one * 1.1);
    //------------------------------------------------------------------------------------

    duration32 = 1000 * double( clock() - startTime32 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration32 / 1000000<< " milliseconds." << endl << endl;


    double duration33;
    clock_t startTime33 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_two, size_two, size_two / 10);
    //------------------------------------------------------------------------------------

    duration33 = 1000 * double( clock() - startTime33 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration33 / 1000000<< " milliseconds." << endl;


    double duration34;
    clock_t startTime34 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_two, size_two, size_two / 2);
    //------------------------------------------------------------------------------------

    duration34 = 1000 * double( clock() - startTime34 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration34 / 1000000<< " milliseconds." << endl;


    double duration35;
    clock_t startTime35 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_two, size_two, size_two - size_two / 10);
    //------------------------------------------------------------------------------------

    duration35 = 1000 * double( clock() - startTime35 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration35 / 1000000<< " milliseconds." << endl;


    double duration36;
    clock_t startTime36 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_two, size_two, size_two * 1.1);
    //------------------------------------------------------------------------------------

    duration36 = 1000 * double( clock() - startTime36 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration36 / 1000000<< " milliseconds." << endl << endl;


    double duration37;
    clock_t startTime37 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_three, size_three, size_three / 10);
    //------------------------------------------------------------------------------------

    duration37 = 1000 * double( clock() - startTime37 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration37 / 1000000<< " milliseconds." << endl;


    double duration38;
    clock_t startTime38 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_three, size_three, size_three / 2);
    //------------------------------------------------------------------------------------

    duration38 = 1000 * double( clock() - startTime38 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration38 / 1000000<< " milliseconds." << endl;


    double duration39;
    clock_t startTime39 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_three, size_three, size_three - size_three / 10);
    //------------------------------------------------------------------------------------

    duration39 = 1000 * double( clock() - startTime39 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration39 / 1000000<< " milliseconds." << endl;


    double duration40;
    clock_t startTime40 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_three, size_three, size_three * 1.1);
    //------------------------------------------------------------------------------------

    duration40 = 1000 * double( clock() - startTime40 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration40 / 1000000<< " milliseconds." << endl << endl;


    double duration41;
    clock_t startTime41 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_four, size_four, size_four / 10);
    //------------------------------------------------------------------------------------

    duration41 = 1000 * double( clock() - startTime41 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration41 / 1000000<< " milliseconds." << endl;


    double duration42;
    clock_t startTime42 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_four, size_four, size_four / 2);
    //------------------------------------------------------------------------------------

    duration42 = 1000 * double( clock() - startTime42 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration42 / 1000000<< " milliseconds." << endl;


    double duration43;
    clock_t startTime43 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_four, size_four, size_four - size_four / 10);
    //------------------------------------------------------------------------------------

    duration43 = 1000 * double( clock() - startTime43 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration43 / 1000000<< " milliseconds." << endl;


    double duration44;
    clock_t startTime44 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_four, size_four, size_four * 1.1);
    //------------------------------------------------------------------------------------

    duration44 = 1000 * double( clock() - startTime44 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration44 / 1000000<< " milliseconds." << endl << endl;


    double duration45;
    clock_t startTime45 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_five, size_five, size_five / 10);
    //------------------------------------------------------------------------------------

    duration45 = 1000 * double( clock() - startTime45 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration45 / 1000000<< " milliseconds." << endl;


    double duration46;
    clock_t startTime46 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_five, size_five, size_five / 2);
    //------------------------------------------------------------------------------------

    duration46 = 1000 * double( clock() - startTime46 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration46 / 1000000<< " milliseconds." << endl;


    double duration47;
    clock_t startTime47 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_five, size_five, size_five - size_five / 10);
    //------------------------------------------------------------------------------------

    duration47 = 1000 * double( clock() - startTime47 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration47 / 1000000<< " milliseconds." << endl;


    double duration48;
    clock_t startTime48 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_five, size_five, size_five * 1.1);
    //------------------------------------------------------------------------------------

    duration48 = 1000 * double( clock() - startTime48 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration48 / 1000000<< " milliseconds." << endl << endl;


    double duration49;
    clock_t startTime49 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_six, size_six, size_six / 10);
    //------------------------------------------------------------------------------------

    duration49 = 1000 * double( clock() - startTime49 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration49 / 1000000<< " milliseconds." << endl;


    double duration50;
    clock_t startTime50 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_six, size_six, size_six / 2);
    //------------------------------------------------------------------------------------

    duration50 = 1000 * double( clock() - startTime50 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration50 / 1000000<< " milliseconds." << endl;


    double duration51;
    clock_t startTime51 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_six, size_six, size_six - size_six / 10);
    //------------------------------------------------------------------------------------

    duration51 = 1000 * double( clock() - startTime51 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration51 / 1000000<< " milliseconds." << endl;


    double duration52;
    clock_t startTime52 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_six, size_six, size_six * 1.1);
    //------------------------------------------------------------------------------------

    duration52 = 1000 * double( clock() - startTime52 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration52 / 1000000<< " milliseconds." << endl << endl;


    double duration53;
    clock_t startTime53 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_seven, size_seven, size_seven / 10);
    //------------------------------------------------------------------------------------

    duration53 = 1000 * double( clock() - startTime53 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration53 / 1000000<< " milliseconds." << endl;


    double duration54;
    clock_t startTime54 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_seven, size_seven, size_seven / 2);
    //------------------------------------------------------------------------------------

    duration54 = 1000 * double( clock() - startTime54 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration54 / 1000000<< " milliseconds." << endl;


    double duration55;
    clock_t startTime55 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_seven, size_seven, size_seven - size_seven / 10);
    //------------------------------------------------------------------------------------

    duration55 = 1000 * double( clock() - startTime55 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration55 / 1000000<< " milliseconds." << endl;


    double duration56;
    clock_t startTime56 = clock();

    //Code block--------------------------------------------------------------------------
    for ( int i = 0; i < 1000000; i++)
       binarySearch( arr_seven, size_seven, size_seven * 1.1);
    //------------------------------------------------------------------------------------

    duration56 = 1000 * double( clock() - startTime56 ) / CLOCKS_PER_SEC;
    cout << "Execution took " << duration56 / 1000000<< " milliseconds." << endl;


    delete [] arr_one;
    delete [] arr_two;
    delete [] arr_three;
    delete [] arr_four;
    delete [] arr_five;
    delete [] arr_six;
    delete [] arr_seven;

    return 0;
}

