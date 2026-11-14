#include <iostream>
#include "../include/RedisServer.h"
#include <thread>
#include <chrono>

int main(int argc, char* argv[]){
    int port = 6379; // default
    if (argc >= 2) port = std::stoi(argv[1]); 
    
    RedisServer server(port);

    // Background persistance: dump the database every 30 seconds. (5 * 60 save database)
    std::thread persistanceThread([](){
        while (true) {
            std::this_thread::sleep_for(std::chrono::seconds(300));
            // dump the database
        }
    });
    
    persistanceThread.detach();
    server.run();

    return 0;
}