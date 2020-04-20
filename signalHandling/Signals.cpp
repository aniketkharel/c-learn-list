/*
//
// Created by aniket on 4/18/2020.
//
#include "iostream"
#include "csignal"

using namespace std;

//handler definitions
void signalHandler(int signum) {
    cout << "Interrupted by : " << signum << "\n";
    exit(signum);
}

int main() {
    //register signal
    signal(SIGINT, signalHandler);
    int i = 0;

    while (++i) {
        cout << "Going to sleep i guess" << endl;
        if (i == 4) {
            raise(SIGINT);
        }

        sleep(1);
    }
    return 0;
}*/
