#pragma once
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
    void SetLogFilter(int filter);

    void LogError(std::string message);
   
    void LogWarning(std::string message);
    
    void LogInfo(std::string message);
    
};