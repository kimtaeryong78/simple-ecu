#pragma once
#include <string_view>

namespace simple_ecu {
    class Logger {
        public:
            Logger() = delete;
            static void Info(const std::string_view& message);
            static void Warn(const std::string_view& message);
            static void Error(const std::string_view& message);
    };
} // namespace simple_ecu
