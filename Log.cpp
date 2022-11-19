#include <iostream>

class Log
{
public:
    int ErrorOnly = 0;
    int WarnAndError = 1;
    int All = 2;
private:
    int m_LogLevel = All;
public:
    void SetLogFilter(int filter)
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