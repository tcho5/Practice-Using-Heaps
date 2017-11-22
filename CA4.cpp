#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iterator>

#include "Dish.h"

using namespace std;

int main(int argc, char *argv[]){
	Dish *newDish = new Dish();
	newDish->insert("tae");
	newDish->insert("cho");
	newDish->insert("abby");
	newDish->insert("l");
	newDish->insert("ododo");
	newDish->insert("kkkkkk");

	cout << "Original Inputs" << endl;
	for(int i = 1; i <= newDish->SIZE-1; i++){
		cout << newDish->stringArray[i] << endl;
	}

	cout << "=====Testing Find==========" << endl;
	cout << "===== -1 if can't find. Otherwise state index=========" << endl;
	cout << newDish->find("av") << endl;
	cout << newDish->find("asdfaf") << endl;
	cout << newDish->find("abby") << endl;

	cout << "=====Testing Capitalize==========" << endl;
	cout << "===== 1 if true 0 if false=========" << endl;
	cout << newDish->capitalize(1) << endl;
	cout << newDish->capitalize(6) << endl;	
	cout << newDish->capitalize(7) << endl;
	for(int i = 1; i <= newDish->SIZE-1; i++){
		cout << newDish->stringArray[i] << endl;
	}

	cout << "=====Testing ALL Capitalize==========" << endl;
	cout << "===== 1 if true 0 if false=========" << endl;
	cout << newDish->allCaps(1) << endl;
	cout << newDish->allCaps(3) << endl;
	cout << newDish->allCaps(6) << endl;	
	cout << newDish->allCaps(7) << endl;
	for(int i = 1; i <= newDish->SIZE-1; i++){
		cout << newDish->stringArray[i] << endl;
	}

	cout << "=====Testing Truncate==========" << endl;
	cout << "===== 1 if true 0 if false=========" << endl;
	cout << newDish->truncate(1, 2) << endl;
	cout << newDish->truncate(3, 2) << endl;
	cout << newDish->truncate(6, 1) << endl;	
	cout << newDish->truncate(7, 2) << endl;
	for(int i = 1; i <= newDish->SIZE-1; i++){
		cout << newDish->stringArray[i] << endl;
	}
	cout << "============ Alpha Heap =========" << endl;
	for(int i = 1; i <= newDish->SIZE-1; i++){
		cout << newDish->alphaArray[i] << endl;
	}
	cout << "The first Alphabet string: " << newDish->getfirst() << endl;

	cout << "======== shortestHeap ===========" << endl;
	for(int i = 1; i <= newDish->SIZE-1; i++){
		cout << newDish->shortestArray[i] << endl;
	}
	cout << "The shortest string length: " << newDish->getshortest() << endl;
}

