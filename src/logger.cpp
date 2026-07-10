#include "simple_ecu/logger.hpp"
#include <iostream>

namespace simple_ecu {
    void Logger::Info(const std::string_view& message) {
        std::cout << "[INFO]: " << message << std::endl;
    }
    void Logger::Warn(const std::string_view& message) {
        std::cout << "[WARN]: " << message << std::endl;
    }
    void Logger::Error(const std::string_view& message) {
        std::cout << "[ERROR]: " << message << std::endl;
    }
}