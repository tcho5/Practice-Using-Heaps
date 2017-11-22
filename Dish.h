#include <string.h>
#include <vector>
using namespace std;

class Dish{
	public:
		Dish();
		int insert(string);
		int find(string);
		bool capitalize(int);
		bool allCaps(int);
		bool truncate(int, int);

		void MinHeapify(int, int);
		void BuildMinHeap(int);

		string getshortest();
		string getfirst();

		string stringArray[1024];
		int alphaArray[1024];
		int shortestArray[1024];
		int SIZE = 1;

	private:
};



