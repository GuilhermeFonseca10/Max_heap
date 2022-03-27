#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
#include "max_heap.cpp"
int main(){

MaxHeap* PriorityQueue = new MaxHeap();
if (PriorityQueue->isEmpty()){
 cout <<"Yes is the correct answer" << endl;
} else {
cout << "We have a problem witd our isEmpty function."<<endl;

}
PriorityQueue->insertItem(10);
PriorityQueue->insertItem(120);
PriorityQueue->insertItem(34);
PriorityQueue->insertItem(41);
PriorityQueue->insertItem(5);
cout << PriorityQueue->getMax()<< endl;
PriorityQueue->extractMax();
cout << PriorityQueue->getMax()<<endl;
if (PriorityQueue->isEmpty()){
    cout << "we have a problem with our isEmpty founction"<<endl;
} else {
cout << "yes this is the correct answer"<<endl;
}
return 0;
}
