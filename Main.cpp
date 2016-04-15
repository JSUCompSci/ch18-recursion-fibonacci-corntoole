#include <iostream>

using namespace std;

/*
	Get n−1 circles moved from peg1 to peg2
  Move nth circle from peg1 to peg3
  Get n−1 circles moved from peg2 to peg3
*/

void do_towers(int circle_count, int begin_peg, int aux_peg, int end_peg) {
  cout << "DEBUG: circle count: " << circle_count;
  cout << " begin peg: " << begin_peg;
  cout << " aux   peg: " << aux_peg;
  cout << " end   peg: " << end_peg << endl;;

  if (circle_count > 0) {
		//Get n−1 circles moved from peg1 to peg2
		do_towers(circle_count-1,begin_peg, end_peg, aux_peg);
		cout << "Moving disc " << circle_count << " from peg " << begin_peg << " to peg " << end_peg << endl;
		do_towers(circle_count-1 ,aux_peg, begin_peg, end_peg);

	}



}

int main (int argc, char *argv[]) {

	do_towers(4, 1, 2, 3);


}
