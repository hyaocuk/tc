#include<iostream>
using namespace std;

class WakingUpEasy {
  public:
    int countAlarms(int[], int);
};

int WakingUpEasy::countAlarms(int volume[], int S) {
  int length;
  //length = sizeof(volume) / sizeof(volume[0]);
  cout << volume[49] << endl;
  int count;
  count = 0;
  int i;
  i = 0;
  while (S > 0) {
    S = S - volume[i];
    i = (i + 1) % length;
    count += 1;
  }
  return length;
}

int main() {
  class WakingUpEasy test;
  int volume[] = {42, 68, 35, 1, 70, 25, 79, 59, 63, 65, 6, 46, 82, 28, 62, 92, 96, 43, 28, 37, 92, 5, 3, 54, 93, 83, 22, 17, 19, 96, 48, 27, 72, 39, 70, 13, 68, 100, 36, 95, 4, 12, 23, 34, 74, 65, 42, 12, 54, 69};
  cout << test.countAlarms(volume, 9999) << endl;
}
