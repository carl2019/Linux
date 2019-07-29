#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

using namespace std;

int main()
{
	pid_t id = fork();
	if(id == -1){
		cerr << "fork error" << endl;
	}
	if(id == 0){
		int count = 0;
		while(1){
			cout << "child is running..." << endl;
			sleep(1);
			if(count++ >= 5){
				exit(1);
			}
		}
	}
	else{
//		int count = 0;
		while(1){
			cout << "father is running..." << endl;
			sleep(1);
//			if(count++ >= 5){
//				exit(1);
//			}
		}
	}
	return 0;
}
