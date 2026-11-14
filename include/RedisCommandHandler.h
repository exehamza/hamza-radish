#ifndef REDIS_COMMAND_HANDLER_H
#define REDIS_COMMAND_HANDLER_H

#include <string>

class RedisCommandHandler {
    public:
    RedisCommandHandler();
    // Process a command from the client and return RESP-formatted response.
    std::string processCommand(const std::string& commandLine);
};

#endif