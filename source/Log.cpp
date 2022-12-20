#include <iostream>

class Log
{
public:
    enum Level
    {
        ErrorOnly, WarnAndError, All
    };
private:
    Level m_LogLevel = ErrorOnly;
public:
    void SetLogFilter(Level filter)
    {
        m_LogLevel = filter;
    }
    void LogError(std::string message)
    {
        if(m_LogLevel >= ErrorOnly)
            std::cout << message << std::endl;
    }
    void LogWarning(std::string message)
    {
        if(m_LogLevel >= WarnAndError)
            std::cout << message << std::endl;
    }
    void LogInfo(std::string message)
    {
        if(m_LogLevel >= All)
            std::cout << message << std::endl;
    }
};