#include <iostream>
#include <string>
#include <queue>
#include <cstring>

using namespace std;

queue <pthread_t> northQueue;
queue <pthread_t> eastQueue;
queue <pthread_t> southQueue;
queue <pthread_t> westQueue;

pthread_mutex_t lock;

void* process(void* args){
    pthread_mutex_lock(&lock);

    for(i=0; i<(0xFFFFFFFF);i++);
    cout << "jose" << endl;
    pthread_mutex_unlock(&lock);
}

int main () 
{
    // with no arguments
    string input;


    if (pthread_mutex_init(&lock, NULL) != 0)
    {
        printf("\n mutex init failed\n");
        return 1;
    }

    while (cin >> input) {

         cout << "input: " << input << endl;

         for(int i = 0; i < input.length(); i++){
            if(input[i] == 'n'){
                northQueue.push(t);
            }else if(input[i] == 'e'){
                eastQueue.push(t);
            }else if(input[i] == 'w'){
                 westQueue.push(t);
            }else {
                 southQueue.push(t);
            }

         }

         while(!northQueue.empty()){
            northQueue.pop();
         }
         while(!westQueue.empty()){
             westQueue.pop();
         }
         while(!eastQueue.empty()){
            eastQueue.pop();
         }
         while(!southQueue.empty()){
            southQueue.pop();
         }

    }

    pthread_mutex_destroy(&lock);

    cout << "a vida eh boa " << endl;
    return 0;
}



