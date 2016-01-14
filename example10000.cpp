#include <iostream>
#include "RedBlackTree.h"
#include "CreateTree.h"
#include "windows.h"
#include "psapi.h"
#include <ctime>

using namespace std;
using namespace my_color;

int main(){

    // Write that Tree is being created

    cout << "Building tree is starting...." << "\n";

    // Start time counting for Tree creation
    clock_t begin = clock();

    // Calling algorithm for creating Red Black Trees with Wavelet Trees in it's nodes.
    RedBlackTree tree= createTree('#',8);

    // Finish time counting for Tree creation and calculate time passed
    clock_t end = clock();
    double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

    // Write that Tree is created
    cout << "Building tree is finished in " << elapsed_secs << "s. Starting functions......" << "\n";

    // Start time counting for Rank/Select operations
    clock_t beginFunctions = clock();

    // RANK/SELECT CALLS
    cout << "Select(709 , A) : " << tree.select(tree.getRoot(),709,'a') << "\n";

    cout << "Select(243, T) : " << tree.select(tree.getRoot(),243,'t') << "\n";

    cout << "Select(736, T) : " << tree.select(tree.getRoot(),736,'t') << "\n";

    cout << "Select(548, G) : " << tree.select(tree.getRoot(),548,'g') << "\n";

    cout << "Select(856, A) : " << tree.select(tree.getRoot(),856,'a') << "\n";


    cout << "Rank(A, 8511) : " << tree.rank(tree.getRoot(),8511,'a') << "\n";

    cout << "Rank(T, 657) : " << tree.rank(tree.getRoot(),657,'t') << "\n";

    cout << "Rank(T, 6917) : " << tree.rank(tree.getRoot(),6917,'t') << "\n";

    cout << "Rank(T, 2236) : " << tree.rank(tree.getRoot(),2236,'t') << "\n";

    cout << "Rank(C, 3157) : " << tree.rank(tree.getRoot(),3157,'c') << "\n";

    // Algorithm finished successfully
    cout << "Job is done !\n";

    // Finish time counting for Rank/Select operations and calculate time passed
    clock_t endFunc = clock();
    double elapsed_secs_functions = double(endFunc - beginFunctions) / CLOCKS_PER_SEC;

    // Calculate memory used
    PROCESS_MEMORY_COUNTERS_EX pmc;
    GetProcessMemoryInfo(GetCurrentProcess(), reinterpret_cast<PPROCESS_MEMORY_COUNTERS>(&pmc), sizeof(pmc));
    SIZE_T virtualMemUsedByMe = pmc.PrivateUsage;

    cout << "Memory used : " << virtualMemUsedByMe << "\n";

    cout << "Time elapsed for functions : " << elapsed_secs_functions << "s\n";

    return 0;
}