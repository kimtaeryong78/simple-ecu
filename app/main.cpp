#include "simple_ecu/logger.hpp"

int main() {
    simple_ecu::Logger::Info("Hello, SimpleECU!");
    simple_ecu::Logger::Warn("This is a warning message.");
    simple_ecu::Logger::Error("This is an error message.");
    return 0;
}