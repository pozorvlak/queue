#include <assert.h>
#include "queue.h"

int main() {
  ts_queue<int> Q;
  Q.push(8);
  Q.push(7);
  Q.push(6);
  Q.push(2);
  Q.dump();
  
  assert(Q.size() == 4);
  assert(Q.back() == 2);
  Q.dump();

  assert(Q.front() == 8);
  Q.pop();
  Q.dump();

  assert(Q.front() == 7);
  Q.pop();
  Q.dump();

  assert(Q.front() == 6);
  Q.pop();
  Q.dump();
  
  assert(Q.front() == 2);
  Q.pop();
  Q.dump();

  assert(Q.empty());
}

