/*
 * Class that is used for designing red and black tree which contains wavelet node in each line. It works an alfabet that contains 'a','c','g' and d
 * but it can also work with lower and upper cases.
 */

#ifndef UNTITLED1_CREATETREE_H
#define UNTITLED1_CREATETREE_H
#include <iostream>
#include <vector>
#include <string>
#include "RedBlackTree.h"
#include <iostream>
#include <fstream>
#include "wTree.h"
#include <algorithm>
#include <ctype.h>
//#include <w32api/wbemdisp.h>
#include "Data.h"

using namespace std;
inline
/**
 * Function creates rb tree with defined size of block in  wavelet tree
 */
 RedBlackTree createTree(char end = '#',int blockSize=8){


    bool canContinue = true;
    long id=0;
     long signs=0;
     long nA=0,nC=0,nG=0,nT=0;

    vector<char> alf = {'a', 'c', 'g', 't'};
    RedBlackTree rb = RedBlackTree();
    char c;

    while (canContinue) {
        string s;
        for (int i = 0; i < blockSize; i++) {

            cin >> c;

            if (c == '>') {
                int i = 0;
               string bezze;
                getline(cin, bezze);
            } else  if (c != 'G' && c != 'A' && c != 'C' && c != 'T' and c != 'g' && c != 'a' && c != 'c' && c != 't' ){
                continue;
            } else {


                s += tolower(c);

            }
            int d = std::cin.peek();  // peek character

            if ( d == EOF ) canContinue=false;
        }

        wTree *w = new wTree(s, alf);

        long aCurr = w->rank('a', w->length() - 1);
        long cCurr = w->rank('c', w->length() - 1);
        long gCurr = w->rank('g', w->length() - 1);
        long tCurr = w->rank('t', w->length() - 1);

        if (s.length() > 0) {
        Data *d = new Data(id, signs, nA, nC, nG, nT);
        rb.insert(id, w, d);
    }

        nA+=aCurr;
        nC+=cCurr;
        nG+=gCurr;
        nT+=tCurr;

        id++;
        signs+=s.length();


        }
    return rb;
    }

#endif //UNTITLED1_CREATETREE_H
