#include <bits/stdc++.h>
using namespace std;

template <class T>
struct MaxHeap {
 public:
  MaxHeap(size_t capacity){
    
  }
  ~MaxHeap() { delete[] data; }
  int size() { return size_; }
  bool empty() { return size_ == 0; }
  void insert(T elem){
    if(size_<)
  }

 private:
  size_t size_;
  T* data;
  size_t capacity;
  void _shift_up(int k);
};

template<class T>
void MaxHeap<T>::_shift_up(int k){
  while(k > 0 and data[k] > data[((k-1)>>1)]){
    swap(data[k], data[(k-1)>>1]);
    k = (k-1)>>1;
  }
}
